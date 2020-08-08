set selected_resource_name=%1
set selected_resource_path=%2
mount d: "%selected_resource_path%"
D:
del %selected_resource_name%.dat
del %selected_resource_name%.bin

C:\masm5 /I\lib %selected_resource_name%,%selected_resource_name%,%selected_resource_name%,nul
C:\tlink /Tde %selected_resource_name%,%selected_resource_name%,%selected_resource_name%

del %selected_resource_name%.map
del %selected_resource_name%.obj
del %selected_resource_name%.dat
rename %selected_resource_name%.exe %selected_resource_name%.dat

C:\dattobin %selected_resource_name% Yes
C:\convhtml %selected_resource_name%
C:\NumSum
C:\Ogl Yes

copy %selected_resource_name%.htm .\html\%selected_resource_name%.htm
copy %selected_resource_name%sml.htm .\htmlsml\%selected_resource_name%sml.htm
copy main.htm .\html\main.htm
copy dcl%selected_resource_name%.mdl .\MODEL\dcl%selected_resource_name%.mdl

del %selected_resource_name%.htm
del %selected_resource_name%sml.htm
del main.htm
del dcl%selected_resource_name%.mdl

mount -u D
exit


