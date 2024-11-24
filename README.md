# Nau Engine

## Initialize repository
`git submodule update --init --recursive`

## Vcpkg seup

In any other folder, say `c:\tools`, clone vcpkg repository:
`git clone https://github.com/microsoft/vcpkg`
Run bootstrap here:
`.\vcpkg\bootstrap-vcpkg.bat`

Add enviroment variable
`VCPKG_ROOT=c:\tools\vcpkg`

After any `vcpkg.json` update (In Nau root folder) clean build is recommended. 
Save all changes!!! and do git clean -d -x -f

## Configure

Configure with cmake presets:
Windows
`cmake --preset win_vs2022_x64`
or (optional)
`cmake --preset win_ninja_clangcl-debug`
or use ide that does supports cmake presets (VSCode)

## Build

Build with IDE or 
`cmake --build build\win_vs2022_x64 --config=Debug`
or (optional) any other build
`cmake --build build\win_ninja_clangcl-debug`


## Build mode / Install
Install prebuild Engine in `output` folder

`cmake --install build\win_vs2022_x64 --config=Debug`

In `output` folder, run Configure and Build using same presets