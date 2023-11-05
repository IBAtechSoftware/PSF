#pragma once

#include <ostream>
#include <istream>
#include <fstream>
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
    PSFWritableType_Short = 2,
    PSFWritableType_Double = 3,
    PSFWritableType_String = 4
};

struct PSFWritable {
    PSFWritableType type;
    size_t size;

    float f;
    short s;
    double d;
    int i;
    std::string ss;

    void writeToStream(std::ofstream &ofs);
    void readFromStream(std::ifstream &ifs);
};


struct PSFSaveFileProperties {
    std::string game;
    int version;
};

class PSFReadInterface {
public:
    virtual int readInt() = 0;
    virtual short readShort() = 0;
    virtual float readFloat() = 0;
    virtual double readDouble() = 0;
    virtual std::string readString() = 0;
};

class PSFWriteInterface {
public:
    virtual void writeInt(int v) = 0;
    virtual void writeShort(short v) = 0;
    virtual void writeFloat(float v) = 0;
    virtual void writeString(std::string v) = 0;
};

class PSFRestoreData : public PSFReadInterface {
public:
    PSFRestoreData(std::ifstream &ifs);

    int readInt() override;
    short readShort() override;
    float readFloat() override;
    double readDouble() override;
    std::string readString() override;

private:
    std::ifstream &m_stream;
};

class PSFSaveData : public PSFWriteInterface {
public:
    PSFSaveData(std::ofstream &ofs);

    void writeInt(int v) override;
    void writeShort(short v) override;
    void writeFloat(float v) override;
    void writeString(std::string v) override;

private:
    std::ofstream &m_stream;
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