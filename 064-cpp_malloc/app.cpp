#include <stdio.h>

int main()
{
    // heap
    // int *p = mallov(sizeof(int ));
    // int *p = new int;
    //*p = 777;
    // printf("addr = 0x%p value : %d\n", p, *p);

    int *p = new int[3];
    p[0] = 11;
    p[1] = 33;
    p[2] = 44;
    for (int i = 0; i < 3; i++)
        printf("p[%d] : %d\n", i, p[i]);
    delete[] p;
    // free(p);
    return 0;
}

// g++ app.cpp -o app.exe -m32