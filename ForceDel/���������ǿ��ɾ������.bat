cls
@echo off
echo ����C:\test.doc�ļ��ѱ�wps��word�򿪡�
echo ע�ⱸ���ļ������ɾ������Ҫ�ļ�����Ը�
echo =======================================
echo ʾ�����룺
echo .\test.doc
echo ���С�.\����ʾ��ǰ�ļ���
echo =======================================
echo ��������Ҫɾ�����ļ�����·����
set /p fileToDel=
.\Debug\ForceDel.exe %fileToDel%
pause