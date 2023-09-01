// 4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.

#include <stdio.h>

int main() {
    float num1, num2, num3, max_num;

    printf("Ingrese tres numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Los tres numeros son iguales.\n");
    } 
    else {

        max_num = num1;

        if (num2 > max_num) 
        {
            max_num = num2;
        }
        if (num3 > max_num) 
        {
            max_num = num3;
        }

        printf("%.2f es el mayor.\n", max_num);
    }
    return 0;
}