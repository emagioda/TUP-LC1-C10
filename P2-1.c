// 1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla

#include <stdio.h>

int main(){
    float num1, num2;

    printf("Ingrese dos numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("%.2f es mayor que %.2f\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%.2f es mayor que %.2f\n", num2, num1);
    }
    else {
        printf("Los dos numeros son iguales\n");
    }
    return 0;
}