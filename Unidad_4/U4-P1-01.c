/*
Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante. 
*/

#include <stdio.h>

int main()
{
    int array[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor %d:\n", i + 1);
        scanf("%i", &array[i]);
    }

    for(int j = 0; j < 5; j++)
    {
        printf("Indice: %d, Valor: %d\n", j, array[j]);
    }
    printf("-----------\n");
    for(int k = 4; k >= 0; k--)
    {
        printf("Indice: %d, Valor: %d\n", k, array[k]);
    }

    return 0;
}