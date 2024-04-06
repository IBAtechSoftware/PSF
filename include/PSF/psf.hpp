#pragma once
#include <proto/psf.pb.h>
#include <string>
#include <vector>
#include <memory>

/*
    PSF file layout:

    Header, Version, Write Date

    Table 01:
        INTEGER 5 bytes  VALUE=15
        STRING 200 bytes VALUE=Hello World
        FLOAT  20 bytes  VALUE=1.0f
        DOUBLE 30 bytes  VALUE=1.0d
        SHORT  2 bytes   VALUE=1
*/

const std::string GPSFHeader    = "PSF1";
const std::string GPSFTitleName = "PortableSaveFile1";

enum PSFWritableType {
    PSFWritableType_Int = 0,
    PSFWritableType_Float = 1,
    PSFWritableType_Double = 2,
    PSFWritableType_String = 3
};

struct PSFWritable {
    PSFWritableType type;

    float f;
    double d;
    int i;
    std::string s;

    void writeToStream(PSFProto::PSFSaveFile::PSFKeyValue *kv);
    void readFromStream(PSFProto::PSFSaveFile::PSFKeyValue *kv);
};


struct PSFSaveFileProperties {
    std::string game;
    int version;
};

class PSFReadInterface {
public:
    virtual int readInt() = 0;
    virtual float readFloat() = 0;
    virtual double readDouble() = 0;
    virtual std::string readString() = 0;
};

class PSFWriteInterface {
public:
    virtual void writeInt(int v) = 0;
    virtual void writeFloat(float v) = 0;
    virtual void writeString(std::string v) = 0;
};

class PSFRestoreData : public PSFReadInterface {
public:
    PSFRestoreData(PSFProto::PSFSaveFile *ky, int *cValue);

    int readInt() override;
    float readFloat() override;
    double readDouble() override;
    std::string readString() override;

private:
    PSFProto::PSFSaveFile *m_ky;
    int *m_cValue;
};

class PSFSaveData : public PSFWriteInterface {
public:
    PSFSaveData(PSFProto::PSFSaveFile *ky);

    void writeInt(int v) override;
    void writeFloat(float v) override;
    void writeString(std::string v) override;

private:
    PSFProto::PSFSaveFile *m_ky;
};

class PSFTableHandler {
public:
    PSFTableHandler(std::string tableName);

    /// Handles restoring the game state from disk
    virtual void restore(PSFRestoreData *save) = 0;

    /// Handles saving the game state to disk
    virtual void save(PSFSaveData *save) = 0;

    std::string getTableName();

private:
    std::string m_tableName;
};

class PSFSaveFile {
public:
    PSFSaveFile(std::string filePath);

    inline void setSaveInformation(PSFSaveFileProperties info) {
        m_saveProperties = info;
    }

    inline PSFSaveFileProperties getSaveInformation() {
        return m_saveProperties;
    }

    void registerTableHandler(PSFTableHandler *handler);

    void save();

    void restore();

private:
    std::string m_filePath;
    PSFSaveFileProperties m_saveProperties;

    std::shared_ptr<PSFRestoreData> m_restoreData;
    std::shared_ptr<PSFSaveData> m_saveData;
    std::vector<PSFTableHandler*> m_handlers;
};