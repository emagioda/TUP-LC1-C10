// Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos.

#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i = i+2){
        printf("%i\n", i);
    }
    return 0;
}