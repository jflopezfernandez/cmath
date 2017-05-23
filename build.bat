echo %DATE% %TIME% | awk -F"[ /:.]" "{printf(""""%s%02d%02d-%02d%02d%02d\n"""", $4, $3, $2, $5, $6, $7);}" >%temp%\now.txt
set /p now=<%temp%\now.txt
echo %now%

@echo CMATH Build Started %time% %date% > src/build_%date%_%time%.log > src/stderr.log

@echo off
IF /I "%1%"=="-B" (
	make -B 1>> src/build.log 2>> src/stderr.log
) ELSE (
	make 1>> src/build.log 2>> src/stderr.log
)

@echo on
@echo Completed: %time% %date% >> src/build.log >> src/stderr.log