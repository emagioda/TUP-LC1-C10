/*
Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:
*/

#include <stdio.h>

int main()
{
    int opcion, cont = 0;
    float num1, num2;

    printf("Ingrese 2 numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    do
    {
        printf("1 - Informar su suma\n");
        printf("2 - Informar su resta\n");
        printf("3 - Informar su multiplicacion\n");
        printf("4 - Informar su division\n");
        printf("5 - Informar su cantidad de operaciones realizadas\n");
        printf("6 - Salir\n");
        printf("Seleccione una operación:\n");

        scanf("%i", &opcion);

        while (opcion < 1 || opcion > 6)
        {
            printf("Opcion Incorrecta. Ingresela nuevamente:\n");
            scanf("%i", &opcion);
        }

        switch (opcion)
        {
        case 1:
            printf("La suma es: %.2f\n", num1 + num2);
            cont += 1;
            break;
        
        case 2:
            printf("La resta es: %.2f\n", num1 - num2);
            cont += 1;
            break;
        
        case 3:
            printf("El producto es: %.2f\n", num1 * num2);
            cont += 1;
            break;

        case 4:
            printf("La division es: %.2f\n", num1 / num2);
            cont += 1;
            break;

        case 5:
            printf("La cantidad de operaciones realizadas es: %i\n", cont);
            break;
        
        default:
            break;
        }
        
    } while (opcion != 6);
    
    return 0;
}