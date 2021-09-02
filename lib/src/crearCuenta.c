#include "../include/banco.h"
#include <stdlib.h>
#include <stdio.h>

struct cuentasBanc {
char nombre[10];
char apellido[10];
long cuenta;
double saldo;
};

struct cuentasBanc * CrearCuenta( struct cuentasBanc *cuentasBancaria ){
for ( int i = 0; i < 3; i++ ){
    printf("\n\t\tNombre: ");
scanf("%s",&cuentasBancaria[i].nombre);
    printf("\t\tApellido: ");
    scanf("%s",&cuentasBancaria[i].apellido);
long int aleatorio;
     aleatorio = rand () % 99999 + 10000;
cuentasBancaria[i].cuenta = aleatorio;
cuentasBancaria[i].saldo = 0;
}
return cuentasBancaria;
}