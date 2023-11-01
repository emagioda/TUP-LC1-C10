#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Cliente {
    int nroCuenta;
    int clave;
    char nombre[21];
    int saldo;
    int estado;
};

int main() {
    // Inicializa el generador de números aleatorios con una semilla
    srand(time(NULL));

    struct Cliente clientes[10];
    int numerosCuenta[900]; // Arreglo para asegurar números de cuenta únicos

    for (int i = 0; i < 900; i++) {
        numerosCuenta[i] = 100 + i;
    }

    for (int i = 0; i < 10; i++) {
        int index = rand() % (900 - i);
        clientes[i].nroCuenta = numerosCuenta[index];
        numerosCuenta[index] = numerosCuenta[899 - i];
        clientes[i].clave = 1000 + rand() % 9000; // Número de 4 dígitos
        snprintf(clientes[i].nombre, sizeof(clientes[i].nombre), "Cliente%d", i + 1);
        clientes[i].saldo = rand() % 20000; // Saldo aleatorio
        clientes[i].estado = rand() % 2;

        printf("// Cliente %d\n", i + 1);
        printf("cliente[%d].nroCuenta = %d;\n", i, clientes[i].nroCuenta);
        printf("cliente[%d].clave = %d;\n", i, clientes[i].clave);
        printf("strcpy(cliente[%d].nombre, \"%s\");\n", i, clientes[i].nombre);
        printf("cliente[%d].saldo = %d;\n", i, clientes[i].saldo);
        printf("cliente[%d].estado = %d;\n", i, clientes[i].estado);
    }

    return 0;
}
