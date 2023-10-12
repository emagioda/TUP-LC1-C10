/*
Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.
*/

#include <stdio.h>

int main()
{
    int suma = 0,
        tam_matriz = 3,
        matriz[tam_matriz][tam_matriz];

    for (int i = 0; i < tam_matriz; i++)
    {
        for(int j = 0; j < tam_matriz; j++)
        {
            printf("Ingrese el elemnto [%i][%i] de la matriz\n", i, j);
            scanf("%i", &matriz[i][j]);

            if (i != j)
            {
                suma += matriz[i][j];
            }
        }
    }
    printf("\nLa suma es: %i\n", suma);

    return 0;
}
