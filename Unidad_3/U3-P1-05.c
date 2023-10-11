//5- Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar

#include <stdio.h> 

int main(){
    int num;

    printf("Ingrese un numero: \n");
    scanf("%i", &num);
    
    if (num % 2 == 0){
        printf("Es par.\n");
    }
    else{
        printf("Es impar.\n");
    }
    return 0;
}
