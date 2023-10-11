/*
Escribir un algoritmo que pida la altura de una persona, 
Si la altura es menor o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”
Si la altura está entre 151 y 170 escriba el mensaje: “Persona de altura media”
Si la altura es mayor al 170 escriba el mensaje: “Persona de altura por arriba de la media”
*/
#include <stdio.h>

int main(){

    float altura;

    printf("Ingrese su altura:\n");
    scanf("%f", &altura);

    if (altura <= 0){
        printf("Altura Invalida\n");
    }
    else if (altura <= 150){
        printf("Persona de altura por debajo de la media\n");
    }
    else if(altura < 170){
        printf("Persona de altura media\n");
    }
    else{
        printf("Persona de altura por arriba de la media\n");
    }

    return 0;
}
