#include "../include/banco.h"
#include <stdio.h>

struct cuentasBanc {
    char nombre[10];
    char apellido[10];
    long cuenta;
    double saldo;
};

struct cuentaBanc * mostrarCuentas( struct cuentasBanc *CB ){
    for ( int i = 0; i < 3; i++ ){
        printf("\n\t\t-------------------------------------------------\n");
        printf("\n\t\tEstimado(a) %s",CB[i].nombre);
        printf("\n\t\tsu no. de cuenta es: %d",CB[i].cuenta);
        printf("\n\t\ty su saldo actual es $%lf ",CB[i].saldo);
        printf("\n\t\t-------------------------------------------------\n");
    }  
}

