/*
Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.
*/
#include <stdio.h>

int main()
{
    int array[5], cont = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor %d:\n", i + 1);
        scanf("%i", &array[i]);

        if(array[i] == 5)
        {
            cont += 1;
        }
    }
    printf("El numero 5 se repite %d veces.\n", cont);
    return 0;
}
