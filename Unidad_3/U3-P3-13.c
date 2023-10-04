/*
Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
@@@@@@@@@@
@@@@@@@@@
@@@@@@@@
@@@@@@@
@@@@@@
@@@@@
@@@@
@@@
@@
@
*/

#include <stdio.h>

int main()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}