@echo off
cls

dir %1\*txt

set /P scelta="Inserisci il nome del file txt"

type %1\scelta% | more