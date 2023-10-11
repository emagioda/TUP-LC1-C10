/*
Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida
@@
@
@@
@
@@
@
@@
@
@@
@
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("@\n");
        }
        else
        {
            printf("@@\n");
        }
    }
    return 0;
}
