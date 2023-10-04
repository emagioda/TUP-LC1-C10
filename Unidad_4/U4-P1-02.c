/*
Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.
*/

#include <stdio.h>

int main()
{
    int array[5];
    float acum = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor %d:\n", i + 1);
        scanf("%i", &array[i]);
        acum += array[i];
    }

    printf("La suma de los elementos es: %.2f\n", acum);
    printf("El promedio es: %.2f\n", acum / 5);

    return 0;
}