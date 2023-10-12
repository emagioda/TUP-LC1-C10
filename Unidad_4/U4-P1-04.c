/*
Dado el vector {10, 20, 5, 15, 30, 20}
    a. Informar el vector de la forma: "Indice: X, Valor: Y"
    b. Totalizar el vector e informar el total.
    c. Informar el contenido de las posiciones impares.
    d. Informar las posiciones que contienen números impares.
    e. Informar el mayor número.
    f. Informar cuántas veces aparece el número 20. 
*/

#include <stdio.h>

int main()
{
    int vector[] = {10, 20, 5, 15, 30, 20},
        acum = 0,
        num_max = vector[0],
        cont_veinte = 0;

    for(int i = 0; i < 6; i++)
    {
        printf("Indice: %d, Valor: %d\n", i, vector[i]);
        acum += vector[i];

        if (vector[i] > num_max)
        {
            num_max = vector[i];
        }

        if (vector[i] == 20)
        {
            cont_veinte += 1;
        }
    }

    printf("La suma de los elementos es: %d\n", acum);

    for(int i = 0; i < 6; i++)
    {
        if (vector[i] % 2 != 0)
        {
            printf("La posicion %d contiene numero impar\n", i);
        }
    }

    for(int j = 1; j < 6; j += 2)
    {
        printf("Posicion %d: %d\n", j, vector[j]);
    }

    printf("El elemento mayor es: %d\n", num_max);
    printf("El elemento veinte aparece %d veces.\n", cont_veinte);

    return 0;
}
