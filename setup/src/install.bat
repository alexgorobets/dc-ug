@echo off

set version=3.8

echo =======================
echo Python %version% required
echo =======================

py -%version% -m pip install --upgrade pip
echo pip package installed
echo =======================

py -%version% -m pip install pipenv
echo pipenv package installed
echo =======================

py -%version% -m pip install pew
echo pew package installed
echo =======================

py -%version% -m pipenv --python %version%
