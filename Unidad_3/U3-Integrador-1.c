/*
La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. 
Estas tarifas dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista.
● Número de pasajeros que lleve.
● Tipo horario del día:

La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje.  
Estas tarifas dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista.
● Número de pasajeros que lleve.
● Tipo horario del día: 

    Horario A: horas de “Alta” congestión:
        ● Los automóviles con tres pasajeros o más no pagan peaje
        ● Los camiones pagan $300
        ● Las motos pagan $100
    Horario B: horas de “Baja” congestión:
        ● Los automóviles pagan $150
        ● Los camiones pagan $200
        ● Las motos no pagan peaje
    En este horario la tarifa es independientemente del número de pasajeros.

Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.
*/

#include <stdio.h>

int main()
{
    int valido = 0, vehiculo, pasajeros;
    char hora;

    do
    {
        printf("Ingrese su tipo de vehiculo:\n");
        printf("1 - camion\n");
        printf("2 - automovil\n");
        printf("3 - moto\n");
        scanf("%i", &vehiculo);

        if(vehiculo != 1 && vehiculo != 2 && vehiculo != 3)
        {
            printf("Opcion Invalida.\n");
        }
        else
        {
            valido = 1;
        }
    } while (valido != 1);

    printf("Ingrese el numero de pasajeros:\n");
    scanf("%i", &pasajeros);

    valido = 0;
    do
    {
        printf("Ingrese el horario del dia:\n");
        printf("A - horas de “Alta” congestión\n");
        printf("B - horas de “Baja” congestión\n");
        scanf(" %c", &hora);

        if(hora != 'A' && hora != 'B' )
        {
            printf("Opcion Invalida.\n");
        }
        else
        {
            valido = 1;
        }
    } while (valido != 1);

    return 0;
}
