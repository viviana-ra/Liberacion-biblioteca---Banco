#include <stdlib.h>
#include <stdio.h>

struct cuentasBan {
char nombre[10];
char apellido[10];
long cuenta;
double saldo;
};
struct cuentasBan * CrearCuenta( struct cuentasBan *cuentasBancaria ){
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
int main(){
struct cuentasBan *cuentas;
cuentas = malloc (3 * sizeof (* cuentas));
CrearCuenta(cuentas);
printf("cuentas creadas \n");
printf("%s \n",cuentas[0].nombre);
printf("%s \n",cuentas[1].nombre);
printf("%s \n",cuentas[2].nombre);
return 0;
}