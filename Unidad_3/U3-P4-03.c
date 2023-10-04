/*
Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.
*/

#include <stdio.h>

int main(){

    float num, suma;

    for (int i = 1; i <= 10; i++)
    {
        printf("Ingrese un numero positivo: \n");
        scanf("%f", &num);

        while (num <= 0)
        {
            printf("Numero Invalido. Ingrese otro.\n");
            scanf("%f", &num);
        }

        suma += num;   
    }

    printf("La suma es igual a: %.2f\n", suma);

    return 0;
}