/*
Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones
1- Consultar saldo
2- Consultar CBU
3- Salir
*/

#include <stdio.h>

#define MAX_INTENTOS 3

int main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int intentos = 1;

    printf("Ingrese su Usuario (DNI):\n");
    int usuario;
    scanf("%i", &usuario);

    while (usuario != dni && intentos < MAX_INTENTOS)
    {
        printf("Usuario Incorrecto. (Intentos restantes:%i)\n", MAX_INTENTOS-intentos);
        scanf("%i", &usuario);
        intentos++;
    }

    if (usuario == dni)
    {
        printf("Ingrese su Contrasenia:\n");
        int contra;
        scanf("%i", &contra);
        intentos = 1;

        while (contra != pass && intentos < MAX_INTENTOS)
        {
            printf("Contrasenia Incorrecta. (Intentos restantes:%i)\n", MAX_INTENTOS-intentos);
            scanf("%i", &contra);
            intentos++;
        }

        if (contra == pass)
        {
            int opcion;

            do
            {
                printf("\n----- MENU -----\n");
                printf("1- Consultar saldo\n");
                printf("2- Consultar CBU\n");
                printf("3- Salir\n");
                printf("Ingrese una opcion:\n");
                scanf("%i", &opcion);

                switch (opcion)
                {
                case 1:
                    printf("Su saldo es: $%i\n", saldo);
                    break;
                case 2:
                    printf("Su CBU es: %i\n", cbu);
                    break;
                case 3:
                    printf("Gracias por utilizar nuestros servicios. Hasta luego!\n");
                    break;
                default:
                    printf("Opcion Invalida.\n");
                    break;
                }

            } while (opcion != 3);
        }
    }

    if (intentos >= MAX_INTENTOS)
    {
        printf("Has agotado los intentos. Cierre el programa e inténtelo más tarde.\n");
    }

    return 0;
}
