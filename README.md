# Portable Save File
Cross platform save file format, and library

```c++
auto file = PSFSave("hello.psf");
file.setGame("Fates Sealed");

PSFTable table = file.newTable("Settings");
table.setProperty("VideoMode", "OpenGL");

file.write(ifs);
```