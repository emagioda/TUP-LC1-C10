/*
Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el programa debe terminar.
*/

#include <stdio.h>

int main(){
    int opcion;
    float num1, num2; 

    printf("Ingrese 2 numeros:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("Menú:\n"
           "1. Informar su suma\n"
           "2. Informar su resta\n"
           "3. Informar su multiplicación\n"
           "4. Informar su división\n"
           "5. Salir\n"
           "Seleccione una operación: \n");
    
    scanf("%i", &opcion);

    while (opcion < 1 || opcion > 5){
        printf("Opcion Invalida, ingrese un nuevo valor.\n");
        scanf("%i", &opcion);
    }

    switch (opcion)
    {
    case 1:
        printf("La suma es:%2.f\n", num1+num2);
        break;

    case 2:
        printf("La resta es:%2.f\n", num1-num2);
    break;

    case 3:
        printf("El producto es:%2.f\n", num1*num2);
    break;

    case 4:
        printf("La division es:%2.f\n", num1/num2);
    break;

    case 5:
        break;
    }

    return 0;
}