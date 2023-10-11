/*
Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. 
Primero, requerir al empleado la antidad de ventas que necesita registrar. 
Luego, para cada venta deberá ingresar el DNI del cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 
1 - Efectivo
2 - Tarjeta de crédito, si la venta fue con tarjeta, pedir que ingrese una opción de las siguientes: 
    1 - Visa
    2 - American Express
    3 - Mercado Pago
    4 - Cabal

Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12) 
El interés por pagar en cuotas será de: 
- 0 interés para efectivo o 1 cuota
- 4% para 3 cuotas
- 8% para 6 y 12 cuotas
por lo se deberá calcular el importe a abonar dependiendo si la venta es en efectivo o en cuotas. 
Validar que todos los datos ingresados por el empleado para una venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
Al finalizar el registro, mostrar la suma total de las ventas ingresadas.
*/
