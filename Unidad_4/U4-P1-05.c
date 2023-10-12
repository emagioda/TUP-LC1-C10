/*
Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
    a. Informar la inflación anual
    b. Informar la inflación más baja, junto con el nro. de mes. Ej: Mes 2 = 0.1
    c. Informar la inflación más alta, junto con el nro. de mes. Ej: Mes 12 = 0.9 .
*/

#include <stdio.h>

int main()
{
    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}, 
        anual = 0;
    
    int inf_baja = 0, 
        inf_alta = 0;

    for (int i = 0; i < 12; i++)
    {
        anual += inflacion[i];

        if (inflacion[i] < inflacion[inf_baja])
        {
            inf_baja = i;
        }

        if (inflacion[i] > inflacion[inf_alta])
        {
            inf_alta = i;
        }
    }

    printf("La inflacion anual es de: %.2f\n", anual);
    printf("Mes %d = %.2f\n",inf_baja, inflacion[inf_baja]);
    printf("Mes %d = %.2f\n",inf_alta, inflacion[inf_alta]);

    return 0;
}
