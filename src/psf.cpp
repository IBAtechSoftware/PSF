#include "../include/PSF/psf.hpp"
#include <fstream>
#include <iostream>
#include <ostream>

void PSFWritable::readFromStream(std::ifstream &ifs){
    ifs.read((char*) &type, sizeof(PSFWritableType));
    ifs.read((char*) &size, sizeof(size_t));

    switch (type){
        case PSFWritableType_Double:
            ifs.read((char*) &d, size);
            break;
        case PSFWritableType_Float:
            ifs.read((char*) &f, size);
            break;
        case PSFWritableType_Int:
            ifs.read((char*) &i, size);
            break;
        case PSFWritableType_Short:
            ifs.read((char*) &s, size);
            break;
        case PSFWritableType_String:
            char* readStr = (char*) malloc(size);
            ifs.read((char*) readStr, size);

            ss = std::string(readStr);
            break;
    }
}

void PSFWritable::writeToStream(std::ofstream &ofs){
    ofs.write((char*) &type, sizeof(PSFWritableType));
    ofs.write((char*) &size, sizeof(size_t));
    
    switch (type){
        case PSFWritableType_Double:
            ofs.write((char*) &d, size);
            break;
        case PSFWritableType_Float:
            ofs.write((char*) &f, size);
            break;
        case PSFWritableType_Int:
            ofs.write((char*) &i, size);
            break;
        case PSFWritableType_Short:
            ofs.write((char*) &s, size);
            break;
        case PSFWritableType_String:
            ofs.write((char*) ss.c_str(), size);
            break;
    }
}

PSFSaveFile::PSFSaveFile(std::string file) : m_filePath(file) {
}

void PSFSaveFile::save() {
    std::ofstream ofs(m_filePath, std::ios::binary);

    ofs.write((char*) GPSFHeader.c_str(), (GPSFHeader.size() + 1) * sizeof(char));

    size_t gameNameSize = (m_saveProperties.game.size() + 1) * sizeof(char);

    ofs.write((char*) &gameNameSize, sizeof(size_t));
    ofs.write((char*) m_saveProperties.game.c_str(), gameNameSize);
    ofs.write((char*) &m_saveProperties.version, sizeof(int));

    m_saveData.reset();
    m_saveData = std::make_shared<PSFSaveData>(ofs);

    for (auto &handler : m_handlers){
        handler->save(m_saveData.get());
    }

    ofs.close();
}

PSFSaveData::PSFSaveData(std::ofstream &ofs) : m_stream(ofs) {

}

void PSFSaveData::writeInt(int v){
    PSFWritable write;
    write.type = PSFWritableType_Int;
    write.size = sizeof(int);
    write.i = v;

    write.writeToStream(m_stream);
}

void PSFSaveData::writeFloat(float v){
    PSFWritable write;
    write.type = PSFWritableType_Float;
    write.size = sizeof(float);
    write.f = v;

    write.writeToStream(m_stream);
}

void PSFSaveData::writeShort(short v){
    PSFWritable write;
    write.type = PSFWritableType_Short;
    write.size = sizeof(short);
    write.s = v;

    write.writeToStream(m_stream);
}

void PSFSaveData::writeString(std::string v){
    PSFWritable write;
    write.type = PSFWritableType_String;
    write.size = (v.size() + 1) * sizeof(char);
    write.ss = v;

    write.writeToStream(m_stream);
}

PSFRestoreData::PSFRestoreData(std::ifstream &ifs) : m_stream(ifs) {

}

int PSFRestoreData::readInt() {
    PSFWritable write;
    write.readFromStream(m_stream);

    return write.i;
}

short PSFRestoreData::readShort() {
    PSFWritable write;
    write.readFromStream(m_stream);

    return write.s;
}

float PSFRestoreData::readFloat() {
    PSFWritable write;
    write.readFromStream(m_stream);

    return write.f;
}

double PSFRestoreData::readDouble() {
    PSFWritable write;
    write.readFromStream(m_stream);

    return write.d;
}

std::string PSFRestoreData::readString() {
    PSFWritable write;
    write.readFromStream(m_stream);

    return write.ss;
}

void PSFSaveFile::restore() {
    std::ifstream ifs(m_filePath, std::ios::binary);

    char* header = (char*) malloc(5 * sizeof(char));
    char* gameName;

    ifs.read((char*) header, (GPSFHeader.size() + 1) * sizeof(char));
    
    if (std::string(header) != "PSF1") {
        throw std::runtime_error("File is not a PSF v1 save file! Header != PSF1");
    }

    size_t gameNameSize = 0;

    ifs.read((char*) &gameNameSize, sizeof(size_t));

    gameName = (char*) malloc(gameNameSize);
    
    ifs.read((char*) gameName, gameNameSize);
    ifs.read((char*) &m_saveProperties.version, sizeof(int));

    m_saveProperties.game = std::string(gameName);

    free(gameName);
    free(header);

    m_restoreData.reset();
    m_restoreData = std::make_shared<PSFRestoreData>(ifs);

    for (auto &handler : m_handlers){
        handler->restore(m_restoreData.get());
    }
}


PSFTableHandler::PSFTableHandler(std::string tableName){
    m_tableName = tableName;
}

void PSFSaveFile::registerTableHandler(PSFTableHandler *handler){
    m_handlers.push_back(handler);
}