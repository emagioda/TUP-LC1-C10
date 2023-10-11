/*
Leer una nota de un alumno por consola e informar la condición del mismo. 
(menor que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). 
Validar que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota inválida”
*/

#include <stdio.h>

int main(){

    int nota;

    printf("Ingrese la nota del alumno: \n");
    scanf("%i", &nota);

    if (nota < 0 || nota > 10){
        printf("Nota Invalida.\n");
    }
    else if (nota < 4){
        printf("Reprobado\n");
    }
    else if (nota < 6){
        printf("Regular\n");
    }
    else {
        printf("Aprobado\n");
    }
    
    return 0;
}
