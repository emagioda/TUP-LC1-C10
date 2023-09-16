// Suma de los 10 primeros números múltiplos de tres.

#include <stdio.h>

int main()
{
    int suma = 0;

    for (int i = 3; i <= 10; i += 3)
    {
        suma += i;
    }

    printf("La suma de los 10 primeros números múltiplos de tres es: %i\n", suma);

    return 0;
}