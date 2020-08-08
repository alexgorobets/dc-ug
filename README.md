# dc-ug

# Installing virtual environment with venv
python -m venv venv

# activate just created virtual environment
.venv/Scripts/activate.ps1

# install all packeges listed in requirements.txt file
pip install -r requirements.txt

# run build_scrupt 
python build_scrupt.py

# Finall steps:
1. Once you commited all above steps you get executable dcug.exe and dcugw.exe in ./dc-ug/dist/
2. Open setup.iss file by InnoSetup in ./dc-ug/setup folder and build a package
3. Now you got a dcug-setup.exe installing package in ./dc-ug/setup/ДЦ-Юг folder
4. Make a zip with all the content of the folder ./dc-ug/setup/ДЦ-Юг
5. Enjoy

