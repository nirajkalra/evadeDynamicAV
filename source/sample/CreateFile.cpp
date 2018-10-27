// UCO 476365
// CreateFile.cpp : Defines the entry point for the console application.
// This file is used for testing injection of executable using different injection techniques
//

#include "stdafx.h"
#include <windows.h>


int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
{
HANDLE h = CreateFile(
		"C:\\bar1.txt",       //create text file at c drive using API
        GENERIC_READ | GENERIC_WRITE,
        0,
        NULL,
        CREATE_NEW,
        FILE_ATTRIBUTE_TEMPORARY,
        NULL);

    if (h == INVALID_HANDLE_VALUE) {
        DWORD err = GetLastError();
        printf("err %d\n", err);
		    MessageBoxA(0, "File creation error", "Error Message",0);
		    return 1;
    }
    
    MessageBoxA(0, "File created successfully", "Successful",0);
		return 0;
}
