
// Lesson 60
// app.c
#include <stdio.h>

extern int var;
int main()
{

    printf("test\n");
    printf("size of ptr : %d\n", sizeof(int *));
    printf("var = %d\n", var);
    return 0;
}

// wmic os get OSArchitecture -определение архитектуры комьютера
// SArchitecture
// 64-bit
// where kernel32.dll
// objdump -p C:\Windows\SysWoW64\kernel32.dll >p3.txt
// gcc app.c -o app.exe -m64
// gcc app.c -o app.exe -m32