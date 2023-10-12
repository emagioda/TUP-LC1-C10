/*
Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde la opcion:
1- Permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
   Validar que el DNI no sea menor que 1000000 ni mayor que 99999999.
   Validar que la nota sea mayor a 0 y menor o igual que 10.
2- Debe pedir el DNI de un alumno y mostrar en consola DNI y nota.
   Si el DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
3- Debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota.
   Si el DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”,
   si el DNI si se encuentra, modificar la nota del alumno por la ingresada.
4- Debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5.
*/

#include <stdio.h>

int main()

{
    int tam = 3,
        dnis[tam],
        dniABuscar,
        indice = 0;

    float notas[tam],
        nuevaNota;

    int opcion;

    do
    {
        printf("\nElija una opcion\n");
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");

        scanf("%d", &opcion);

        if (opcion != 5)

        {
            switch (opcion)

            {
            case 1:
                for (int i = 0; i < tam; i++)
                {
                    do
                    {
                        printf("Ingrese el DNI del alumno %i:\n", i + 1);
                        scanf("%i", &dnis[i]);
                    } while (dnis[i] < 1000000 || dnis[i] > 99999999);

                    do
                    {
                        printf("Ingrese la nota del alumno %i:\n", i + 1);
                        scanf("%f", &notas[i]);
                    } while (notas[i] < 0 || notas[i] > 10);
                }
                break;

            case 2:

                // Buscar un alumno con for

                /*
                 printf("Ingrese el dni del alumno a buscar\n");
                 scanf("%d", &dniABuscar);

                 for (int i = 0; i < tam; i++)
                 {
                     if (dniABuscar == dnis[i])
                     {
                         printf("La nota del alumno con dni %d es %.2f", dnis[i], notas[i]);
                     }
                 }
                 */

                // buscar un alumno con while

                printf("Ingrese el dni del alumno a buscar\n");
                scanf("%d", &dniABuscar);

                indice = 0;

                while (dniABuscar != dnis[indice] && indice < tam)
                {
                    indice++;
                }

                if (dniABuscar == dnis[indice])
                {
                    printf("La nota del alumno con dni %d es %.2f", dnis[indice], notas[indice]);
                }
                else
                {
                    printf("No se ha encontrado el DNI.\n");
                }
                break;

            case 3:

                printf("Ingrese el dni del alumno a buscar\n");
                scanf("%d", &dniABuscar);

                indice = 0;

                while (dniABuscar != dnis[indice] && indice < tam)
                {
                    indice++;
                }

                if (dniABuscar == dnis[indice])
                {
                    do
                    {
                        printf("Ingrese la nueva nota del alumno %i:\n", indice + 1);
                        scanf("%f", &nuevaNota);
                    } while (nuevaNota < 0 || nuevaNota > 10);
                }
                else
                {
                    printf("No se ha encontrado el DNI.\n");
                }
                break;

            case 4:

                for (int i = 0; i < tam; i++)
                {
                    printf("ALUMNO %i: %i\n", i + 1, dnis[i]);
                }
                break;

            default:

                printf("opción inválida");
                break;
            }
        }
    } while (opcion != 5);
    return 0;
}
