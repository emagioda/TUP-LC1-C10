#include <stdio.h>
#include <string.h>

struct usuario
{
    int nroCuenta;   // Número entero entre el 100 y el 999.
    int clave;       // Número entero positivo de 4 digitos.
    char nombre[10]; // Cadena de caracteres de maximo 10 caracteres.
    int saldo;       // Número entero positivo.
    int estado;      // Número entero (0 o 1).
};

int cantClientes = 10; // Cantidad de clientes.

// Carga el arreglo con datos de clientes.
void carga()
{
    struct usuario cliente[cantClientes]; // array de clientes.

    // Cliente 1
    cliente[0].nroCuenta = 695;
    cliente[0].clave = 1126;
    strcpy(cliente[0].nombre, "Carlos");
    cliente[0].saldo = 4614;
    cliente[0].estado = 1;

    // Cliente 2
    cliente[1].nroCuenta = 361;
    cliente[1].clave = 1798;
    strcpy(cliente[1].nombre, "Laura");
    cliente[1].saldo = 18625;
    cliente[1].estado = 1;

    // Cliente 3
    cliente[2].nroCuenta = 294;
    cliente[2].clave = 1668;
    strcpy(cliente[2].nombre, "Micaela");
    cliente[2].saldo = 8619;
    cliente[2].estado = 0;

    // Cliente 4
    cliente[3].nroCuenta = 822;
    cliente[3].clave = 1058;
    strcpy(cliente[3].nombre, "Brenda");
    cliente[3].saldo = 18702;
    cliente[3].estado = 1;

    // Cliente 5
    cliente[4].nroCuenta = 536;
    cliente[4].clave = 9168;
    strcpy(cliente[4].nombre, "Oscar");
    cliente[4].saldo = 462;
    cliente[4].estado = 0;

    // Cliente 6
    cliente[5].nroCuenta = 493;
    cliente[5].clave = 7839;
    strcpy(cliente[5].nombre, "Lucas");
    cliente[5].saldo = 13371;
    cliente[5].estado = 0;

    // Cliente 7
    cliente[6].nroCuenta = 538;
    cliente[6].clave = 9996;
    strcpy(cliente[6].nombre, "Pedro");
    cliente[6].saldo = 12635;
    cliente[6].estado = 0;

    // Cliente 8
    cliente[7].nroCuenta = 848;
    cliente[7].clave = 8906;
    strcpy(cliente[7].nombre, "Daiana");
    cliente[7].saldo = 11100;
    cliente[7].estado = 0;

    // Cliente 9
    cliente[8].nroCuenta = 348;
    cliente[8].clave = 3066;
    strcpy(cliente[8].nombre, "Sergio");
    cliente[8].saldo = 3616;
    cliente[8].estado = 0;

    // Cliente 10
    cliente[9].nroCuenta = 982;
    cliente[9].clave = 4593;
    strcpy(cliente[9].nombre, "Natalia");
    cliente[9].saldo = 9467;
    cliente[9].estado = 1;
}

// Devuelve 1 si el ususario puede iniciar sesión, 0 en caso contrario.
int sesion()
{
    int inicio = 0;

    // ...

    return inicio;
}

// Muestra en pantalla el menú de opciones.
void menu()
{
    printf("\n-------- MENU --------\n");
    printf("\nSeleccione una opción:\n");
    printf("1. Realizar un Depósito.\n");
    printf("2. Realizar una Extracción.\n");
    printf("3. Consultar el Saldo de la Cuenta.\n");
    printf("4. Realizar una Transferencia entre Cuentas.\n");
    printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual.\n");
    printf("6. Salir de la Sesión.\n");
}

// Recibe la opción elegida por el usuario y ejecuta su función correspondiente
void opciones(int opcion)
{
    switch (opcion)

    {
    case 1:
        //
        break;

    case 2:
        //
        break;

    case 3:
        //
        break;

    case 4:
        //
        break;
    case 5:
        //
        break;
    case 6:
        printf("Gracias por utilizar nuestro servicio.\n");
        printf("¡Vuelva pronto!\n");
        break;

    default:
        printf("Opci%cn inv%clida.", 162, 161);
        break;
    }
}

void main()
{
    int user, pin, opcion;

    carga();

    while (1)
    {
        if (sesion())
        {
            do
            {
                menu();               // Imprime el menú.
                scanf("%d", &opcion); // Lee la opción.
                opciones(opcion);     // Escoje la operación.

            } while (opcion != 6);
        }
    }
}