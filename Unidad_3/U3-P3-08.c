// Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: \n");
    scanf("%i", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i\n", num, i, num * i);
    }
    return 0;
}