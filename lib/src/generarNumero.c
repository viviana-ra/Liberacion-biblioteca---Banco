#include "../include/banco.h"
#include <stdio.h>
#include <stdlib.h>
 
int generarNumero( struct cuentasBan *CuentasB ){
    srand(time(NULL));
 
    long int aleatorio;
    double cantidad;
    long cuenta;
     
    aleatorio = rand () % 50000 + 100000; ;
 
    printf("\n\t\tNumero para retirar sin tarjeta: %ld",aleatorio);
 
    return aleatorio;
}