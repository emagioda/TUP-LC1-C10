/*
Actualizar el saldo de una cuenta bancaria, a partir de un retiro. 
Verificar que el saldo sea mayor o igual que el importe a retirar.
*/

#include <stdio.h>

int main(){
    int saldo, retiro;
    
    saldo = 100000;

    printf("Ingrese el monto a reitirar: \n");
    scanf("%i", &retiro);

    if (saldo >= retiro){
        saldo -= retiro;
        printf("El saldo actual de la cuenta es de $%i.\n", saldo);
    }
    else{
        printf("No se puede realizar la operacion\n");
    }

    return 0;
}
