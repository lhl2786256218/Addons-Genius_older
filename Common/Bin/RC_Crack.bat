@ECHO OFF
setlocal EnableDelayedExpansion
color 3e
title Sonible_SmartEqLive_Installer
PUSHD %~DP0 & cd /d "%~dp0"
%1 %2
mshta vbscript:createobject("shell.application").shellexecute("%~s0","goto :runas","","runas",1)(window.close)&goto :eof
:runas
cd "Packages\Native_Instruments_Reverb_Classics\R2R\"
copy "NativeAccess.xml" "%COMMONPROGRAMFILES%\Native Instruments\Service Center\"
start "" "NativeInstruments_Keygen.exe"
echo Done!
echo Copyright ZPAU Team!
echo Thank you!
pause >nul
exit
