// Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("\nTabla del %i\n", i);

        for (int j = 1; j <= 9; j++)
        {
            printf("%i x %i = %i\n", i, j, i * j);
        }
    }

    return 0;
}
