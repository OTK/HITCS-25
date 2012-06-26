cls
@echo off
echo 这里C:\test.doc文件已被wps或word打开。
echo 注意备份文件，如果删除了重要文件后果自负
echo =======================================
echo 示例输入：
echo .\test.doc
echo 其中“.\”表示当前文件夹
echo =======================================
echo 请输入你要删除的文件完整路径：
set /p fileToDel=
.\Debug\ForceDel.exe %fileToDel%
pause