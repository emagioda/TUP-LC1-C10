/*
Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.
*/

#include <stdio.h>

int main()
{
    int ALUMNOS = 5,
        NOTAS = 3;

    float nota, suma, prom_alum, prom_gen = 0;

    for (int i = 1; i <= ALUMNOS; i++)
    {
        suma = 0;
        prom_alum = 0;

        printf("\nAlumno Nº: %i\n", i);

        for (int j = 1; j <= NOTAS; j++)
        {
            printf("Ingrese la Nota %i\n", j);
            scanf("%f", &nota);
            suma += nota;
        }
        prom_alum = suma / NOTAS;
        printf("El promedio del alumno %i es: %.2f\n", i, prom_alum);
        prom_gen += prom_alum;
    }

    printf("\nEl promedio general es: %.2f\n", prom_gen / ALUMNOS);

    return 0;
}