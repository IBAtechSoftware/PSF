#include <PSF/psf.hpp>
#include <fstream>
#include <google/protobuf/stubs/common.h>

void PSFWritable::readFromStream(PSFProto::PSFSaveFile::PSFKeyValue *table) {
  PSFProto::PSFSaveFile::PSFValueType valType = table->type();

  switch (valType) {
  case PSFProto::PSFSaveFile_PSFValueType_Int32: {
    i = table->intval();
    break;
  }
  case PSFProto::PSFSaveFile_PSFValueType_String: {
    s = table->stringval();
    break;
  }
  case PSFProto::PSFSaveFile_PSFValueType_Float: {
    f = table->floatval();
    break;
  }
  case PSFProto::PSFSaveFile_PSFValueType_Double:
    d = table->doubleval();
    break;
  }
}

void PSFWritable::writeToStream(PSFProto::PSFSaveFile::PSFKeyValue *kv) {
  switch (type) {
  case PSFWritableType_Int: {
    kv->set_type(PSFProto::PSFSaveFile_PSFValueType_Int32);
    kv->set_intval(i);
    break;
  }
  case PSFWritableType_Float: {
    kv->set_type(PSFProto::PSFSaveFile_PSFValueType_Float);
    kv->set_floatval(f);
    break;
  }

  case PSFWritableType_Double: {
    kv->set_type(PSFProto::PSFSaveFile_PSFValueType_Double);
    kv->set_doubleval(d);
    break;
  }
  case PSFWritableType_String:
    kv->set_type(PSFProto::PSFSaveFile_PSFValueType_String);
    kv->set_stringval(s);
    break;
  }
}

PSFSaveFile::PSFSaveFile(std::string file) : m_filePath(file) {}

void PSFSaveFile::save() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  PSFProto::PSFSaveFile saveFile;
  saveFile.set_header(GPSFHeader);
  saveFile.set_gamename(m_saveProperties.game);
  saveFile.set_version(m_saveProperties.version);

  int cValue = 0;

  for (auto &handler : m_handlers) {
    PSFSaveData *data = new PSFSaveData(&saveFile);

    handler->save(data);

    delete data;
  }

  std::fstream output(m_filePath,
                      std::ios::out | std::ios::trunc | std::ios::binary);

  if (!saveFile.SerializeToOstream(&output)) {
    throw std::runtime_error(
        "Failed to save PSF save file: Protobuf serialization failed!");
  }
}

PSFSaveData::PSFSaveData(PSFProto::PSFSaveFile *ky) : m_ky(ky) {}

void PSFSaveData::writeInt(int v) {
  PSFWritable write;
  write.type = PSFWritableType_Int;
  write.i = v;

  write.writeToStream(m_ky->add_values());
}

void PSFSaveData::writeFloat(float v) {
  PSFWritable write;
  write.type = PSFWritableType_Float;
  write.f = v;

  write.writeToStream(m_ky->add_values());
}

void PSFSaveData::writeString(std::string v) {
  PSFWritable write;
  write.type = PSFWritableType_String;
  write.s = v;

  write.writeToStream(m_ky->add_values());
}

void PSFSaveData::writeDouble(double d) {
  PSFWritable write;
  write.type = PSFWritableType_Double;
  write.d = d;

  write.writeToStream(m_ky->add_values());
}

PSFRestoreData::PSFRestoreData(PSFProto::PSFSaveFile *ky, int *cValue)
    : m_ky(ky), m_cValue(cValue) {}

int PSFRestoreData::readInt() {
  PSFWritable write;

  write.readFromStream(m_ky->mutable_values(*m_cValue));
  *m_cValue = *m_cValue + 1;

  return write.i;
}

float PSFRestoreData::readFloat() {
  PSFWritable write;

  write.readFromStream(m_ky->mutable_values(*m_cValue));
  *m_cValue = *m_cValue + 1;

  return write.f;
}

double PSFRestoreData::readDouble() {
  PSFWritable write;

  write.readFromStream(m_ky->mutable_values(*m_cValue));
  *m_cValue = *m_cValue + 1;

  return write.d;
}

std::string PSFRestoreData::readString() {
  PSFWritable write;

  write.readFromStream(m_ky->mutable_values(*m_cValue));
  *m_cValue = *m_cValue + 1;

  return write.s;
}

void PSFSaveFile::restore() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  PSFProto::PSFSaveFile saveFile;
  std::fstream input(m_filePath, std::ios::in | std::ios::binary);

  if (!saveFile.ParseFromIstream(&input)) {
    throw std::runtime_error("Failed to load PSF save file: Protobuf parse failed!");
  }
  
  int cValue = 0;

  for (auto &handler : m_handlers) {
    PSFRestoreData* restore = new PSFRestoreData(&saveFile, &cValue);

    handler->restore(restore);

    delete restore;
  }
}

PSFTableHandler::PSFTableHandler(std::string tableName) {
  m_tableName = tableName;
}

void PSFSaveFile::registerTableHandler(PSFTableHandler *handler) {
  m_handlers.push_back(handler);
}