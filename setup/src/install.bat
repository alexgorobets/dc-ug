@echo off

set version=3.8
set venv=dc-ug

echo =======================
echo Python %version% required
echo =======================

echo pip package is being installed
py -%version% -m pip install --upgrade pip
echo pip package installed
echo =======================

echo pew package is being installed
py -%version% -m pip install pew
echo pew package installed
echo =======================

echo %venv% virtual environment is being created
py -%version% -m pew new --python %version% --dont-activate %venv%
echo %venv% virtual environment created
echo =======================