// 3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.

#include <stdio.h>

int main()
{
    float num;

    printf("Ingrese un numero: \n");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("%.2f es positivo\n", num);
    }
    else if (num < 0)
    {
        printf("%.2f es negativo\n", num);
    }
    else
    {
        printf("El numero es igual a 0\n");
    }
    return 0;
}