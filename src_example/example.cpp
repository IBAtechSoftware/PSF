#include "../include/PSF/psf.hpp"
#include <iostream>


class SettingsTableHandler : public PSFTableHandler {
public:
    SettingsTableHandler() : PSFTableHandler("Settings") {}

    void restore(PSFRestoreData *save)
    {
        std::cout << save->readString() << std::endl;
        std::cout << save->readInt() << std::endl;
        std::cout << save->readInt() << std::endl;
        std::cout << save->readFloat() << std::endl;
    }

    void save(PSFSaveData *save)
    {
        save->writeString("Fullscreen"); // Video Mode
        save->writeInt(1890); // Window Height
        save->writeInt(1900); // Window Width
        save->writeFloat(2.0505); // Window Width
    }
};

int main()
{
    PSFSaveFile file("hello.sav");

    file.setSaveInformation({
        .game = "Hello World Game!",
        .version = 1
    });

    file.registerTableHandler(new SettingsTableHandler());

    file.save();
    file.restore();

    std::cout << file.getSaveInformation().game << std::endl;;
}