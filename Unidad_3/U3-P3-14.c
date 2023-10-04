/*
Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y
visualice la siguiente salida:
1 2 3 ... n-1 n
1 2 3 ... n-1
1 2 3
1 2
1
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero positivo:\n");
    scanf("%i", &num);

    if (num < 0)
    {
        printf("Numero Invalido.\n");
    }
    else
    {
        for (int i = num; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%i", j);
            }
            printf("\n");
        }
    }
    return 0;
}