@echo off

REM ------------------------------------------------------------------------------------
REM -- _Make.bat V1.3
REM --
REM -- Auto Module Make.
REM -- _Make.bat [_Make.bat 상대경로]
REM -- ex) _Make.bat ..\ [Debug/Release] [app]
REM ------------------------------------------------------------------------------------

REM -- 설정정보 얻기.
rem call _Config.bat

REM		인자가 있는경우 Skip
if "%2" == "" (set CONFIG=Release) else (set CONFIG=%2)

if "%3" == "" (set MODULE=app) else (set MODULE=%3)

REM -- 날짜 자동으로 넣어주기.
for /F "tokens=1" %%a in ('date /t') do set DATE_TODAY=%%a

set VER=10

echo %VER%

REM echo %VER%

set yy=%DATE_TODAY:~2,2%
set mm=%DATE_TODAY:~5,2%
set dd=%DATE_TODAY:~8,2%
set TODAY=%yy%%mm%%dd%

REM ------------------------------------------------------
set IMG_NAME=%MODULE%_%TODAY%_v1.%VER%

REM	#	Copy Bin / Hex File
set BIN_FILE_NAME=%IMG_NAME%.bin
set OUT_FILE_NAME=%IMG_NAME%.out
set HEX_FILE_NAME=%IMG_NAME%.hex

echo copy "%CONFIG%\%MODULE%.bin" "bin\%BIN_FILE_NAME%"
copy "%1\%CONFIG%\%MODULE%.bin" "%1\..\bin\%BIN_FILE_NAME%"

echo copy "%CONFIG%\%MODULE%.out" "bin\%OUT_FILE_NAME%"
copy "%1\%CONFIG%\%MODULE%.out" "%1\..\bin\%OUT_FILE_NAME%"

REM ------------------------------------------------------
REM 	Gen Hex File
rem rm "%1\%CONFIG%\%MODULE%.hex"
%1\hexbin.exe "%1\%CONFIG%\%MODULE%.bin" "%1\%CONFIG%\%MODULE%.hex"

REM	#	Del last line. ( .hex file )
REM findstr /V ":00000001FF" "%1\%CONFIG%\%MODULE%.hex" > "%1\..\bin\%HEX_FILE_NAME%"
REM 	Jump Address 0x00020000
REM echo :020000022000DC >> "%1\..\bin\%HEX_FILE_NAME%"
REM 	Append CRC :08000000 AA55 XCRC XXXXXXXX YY
rem %1\crc16.exe "%1\%CONFIG%\%MODULE%.bin" >> "%1\..\bin\%HEX_FILE_NAME%"
rem echo :00000001FF >> "%1\..\bin\%HEX_FILE_NAME%"

echo copy "%CONFIG%\%MODULE%.hex" "bin\%HEX_FILE_NAME%"
copy "%1\%CONFIG%\%MODULE%.hex" "%1\bin\%HEX_FILE_NAME%"

:SKIP_BOOTAPP
REM ------------------------------------------------------

REM ------------------------------------------------------
REM		인자가 있는경우 Skip
if "%1" == "" (goto PAUSE) else (goto SKIP)
:PAUSE
pause
:SKIP
REM ------------------------------------------------------
