// Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar dicha situación.

#include <stdio.h>

int main(){

    float DESCMAYOR, DESCMENOR, venta;

    DESCMAYOR = 0.85;
    DESCMENOR = 0.90;

    printf("Ingrese el valor de la venta:\n");
    scanf("%f", &venta);

    if (venta <= 0){
        printf("El valor ingresado no es valido\n");
    }

    else if (venta >= 100000){
        venta *= DESCMAYOR;
        printf("El valor con descuento queda: %.2f\n", venta);
    }
        else {
        venta *= DESCMENOR;
        printf("El valor con descuento queda: %.2f\n", venta);
        }

    return 0;
}
