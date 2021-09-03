#include <stdio.h>
#include <stdlib.h>

struct cuentasBanc {
    char nombre[10];
    char apellido[10];
    long cuenta;
    double saldo;
};

struct cuentasBanc * mostrarCuentas( struct cuentasBanc *CB ){
    for ( int i = 0; i < 3; i++ ){
        printf("\n\t\t-------------------------------------------------\n");
        printf("\n\t\tEstimado(a) %s",CB[i].nombre);
        printf("\n\t\tsu no. de cuenta es: %d",CB[i].cuenta);
        printf("\n\t\ty su saldo actual es $%d ",CB[i].saldo);
        printf("\n\t\t-------------------------------------------------\n");
    }  
}

int main(  ){

    struct cuentasBanc *CB;
    CB = malloc(3*sizeof(struct cuentasBanc));

    for ( int i = 0; i < 3; i++ ){
        printf("\n\t\tNombre: ");
        scanf("%s",CB[i].nombre);
        printf("\n\t\tApellido: ");
        scanf("%s",CB[i].apellido);
        printf("\n\t\tCuenta: ");
        scanf("%d",&CB[i].cuenta);
        printf("\n\t\tSaldo: ");
        scanf("%lf",&CB[i].saldo);
    }


    mostrarCuentas(CB);

    return 0;
}