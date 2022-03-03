@echo off
pushd ..\build
echo %CD%
cl -nologo -Zi -FC ..\code\game.c user32.lib
popd