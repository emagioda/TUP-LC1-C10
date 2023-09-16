// Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.

#include <stdio.h>

int main(){

    int suma;

    for (int i = 1; i <= 10 ; i = i + 2){
        suma += i;
    }

    printf("La suma de los numeros impares entre el 1 y el 10 es: %i\n", suma);
    return 0;
}