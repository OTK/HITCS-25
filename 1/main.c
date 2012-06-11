#include "windows.h"
#include "stdio.h"

#pragma comment(lib, "kernel32.lib")

// Global Variables Declaration

char *pFileName = NULL;
HANDLE hFileDel;

// ERROR Handle Function

void ErrorExit(LPTSTR lpszFunction) {

    TCHAR szBuf[80];

    LPVOID lpMsgBuf;

    DWORD dw = GetLastError();



    FormatMessage(

            FORMAT_MESSAGE_ALLOCATE_BUFFER |

            FORMAT_MESSAGE_FROM_SYSTEM,

            NULL,

            dw,

            MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),

            (LPTSTR) & lpMsgBuf,

            0, NULL);



    wsprintf(szBuf,

            "%s failed with error %d: %s",

            lpszFunction, dw, lpMsgBuf);



    MessageBox(NULL, szBuf, "Error", MB_OK);



    LocalFree(lpMsgBuf);

    ExitProcess(dw);

}



// Main Function

int main(int argc, char *argv[]) {

    if (argc != 2) {

        printf("Command Format: %s filename\n", argv[0]);

        return -1;

    }



    pFileName = argv[1]; // the file to be deleted



    // TODO: Open the Target File

    hFileDel = CreateFile(pFileName,

            GENERIC_READ | GENERIC_WRITE,

            0,

            NULL,

            OPEN_EXISTING,

            FILE_ATTRIBUTE_NORMAL,

            NULL);

    if (hFileDel == INVALID_HANDLE_VALUE) // file can not be opened
    {

        ErrorExit("CreatFile");

        return -1;

    }



    LPSTR RubbishBuffer;

    DWORD dwBytesWritten;

    DWORD dwBufferLength;



    // TODO: Get File Size

    dwBufferLength = GetFileSize(hFileDel, NULL);



    // TODO: Construct the Rubbish Buffer

    int BufferSize = (int) dwBufferLength;

    int i; // loop counter

    char RubbishData[BufferSize], *p;

    p = RubbishData;

    for (i = 0; i < BufferSize; i++) {

        *p = &#39;i&#39;

                p++;

    }

    //printf("the rubbish buffer is: %s\n", RubbishData);



    // TODO: Overwrite the Original File with Rubbish Data

    if (!WriteFile(hFileDel,

            RubbishData,

            dwBufferLength,

            &dwBytesWritten,

            NULL)) {

        ErrorExit("WriteFile Function");

        return -1;

    }



    CloseHandle(hFileDel);



    // TODO: Delete the Modified File

    if (!DeleteFile(pFileName)) {

        ErrorExit("DeleteFile");

        return -1;

    }



    return 1;

}