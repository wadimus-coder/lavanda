#include <stdio.h>
extern int var;
int main()
{
    printf("var = %d\n", var);
    return 0;
}

// gcc -shared var.c -o var.so -Wl,-soname=var.so
// создание именщванной переменной
// export LD_LIBRARY_PATH=/mnt/c/Sock_FdCatalog/059a-versions_Linux/var_so_2