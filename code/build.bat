@echo off
pushd ..\build
echo %CD%
cl -nologo -Zi ..\code\game.c user32.lib
popd