@echo off
title SameGo数据库备份工具
::数据库配置信息
set host=localhost
set port=3306
set user=root
set pass=fenglican
set dbname=log_analysis

set hour=%time:~0,2%
if "%time:~0,1%"==" " set hour=0%time:~1,1%
set now=%Date:~0,4%%Date:~5,2%%Date:~8,2%%hour%%Time:~3,2%%Time:~6,2%
echo "备份中,请稍等... ..."
set backupfile=C:\samegoOpt\backup\db\%dbname%-%now%.sql
if not exist C:\samegoOpt\backup\db md C:\samegoOpt\backup\db
mysqldump -h%host% -P%port% -u%user% -p%pass% -c --add-drop-table %dbname% > %backupfile%
echo 正在删除两个月前的备份文件... ...
::不输出打印信心 cmd>nul 2>nul
forfiles /p "C:\samegoOpt\backup\db" /m *.sql /d -60 /c "cmd /c del @file /f">nul 2>nul
echo 备份完成!
pause
