@echo off
cls
set numero = 5
set /P num=dimmi un numero 
echo numero vale %numero%
echo num vale %num%
set /A somma=%numero%+%num%
echo totale vale %somma%