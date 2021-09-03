#include <stdio.h>
#include <stdlib.h>

struct cuentasBan {
    char nombre[10];
    char apellido[10];
    long cuenta;
    double saldo;
};


int generarNumero( struct cuentasBan *CuentasB ){
    srand(time(NULL));
 
    long int aleatorio;
    double cantidad;
    long cuenta;
     
    aleatorio = rand () % 50000 + 100000; ;
 
    printf("\n\t\tNumero para retirar sin tarjeta: %ld",aleatorio);
 
    return aleatorio;
}


int main(){
    struct cuentasBan *CuentasB;
    generarNumero(CuentasB);
    return 0;
}