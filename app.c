// app.c 059-versions_Linux

#include <stdio.h>
extern int var;
int main()
{
    printf("var = %d\n", var);
    return 0;
}

// gcc -shared var.c -o var.so -Wl,-soname=var.so
// создание именованной переменной
// export LD_LIBRARY_PATH=/mnt/c/Sock_FdCatalog/059a-versions_Linux/var_so_2
// ln -s var.so.1 var.so создание  символической ссылки : var.so -> var.so.1
// ln -sf  var.so.1  var.so создание новой симвлю ссылки