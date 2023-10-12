/*
Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. 
Mostrar los 10 números en pantalla mediante un solo array.
*/

#include <stdio.h>

int main()

{
    float num;
    float arreglo1[5];
    float arreglo2[5];
    float arreglo3[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            printf("Ingrese el elemnto %i del array 1: \n", i + 1);
            scanf("%f", &num);
            arreglo1[i] = num;
            arreglo3[i] = num;
        }
        else
        {
            printf("Ingrese el elemnto %i del array 2: \n", i - 4);
            scanf("%f", &num);
            arreglo2[i - 5] = num;
            arreglo3[i] = num;
        }
    }
    printf("\nEl array completo quedaria:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%.2f\n", arreglo3[j]);
    }

    return 0;
}
