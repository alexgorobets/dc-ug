@echo off

echo =======================
pipenv --rm
echo virtual environment is removed
echo =======================

rmdir /S /Q "%PROGRAMFILES(X86)%\DcUg"
