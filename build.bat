@echo CMATH Build Started %time% %date% > src/build.log
@echo CMATH Build Started %time% %date% > src/stderr.log

@echo off
IF /I "%1%"=="-B" (
	make -B 1>> src/build.log 2>> src/stderr.log
) ELSE (
	make 1>> src/build.log 2>> src/stderr.log
)

@echo on
@echo Completed: %time% %date% >> src/build.log
@echo Completed: %time% %date% >> src/stderr.log