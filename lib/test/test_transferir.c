#include <stdlib.h>
#include <stdio.h>
struct cuentasBanc
{
    char nombre[10];
    char apellido[10];
    long cuenta;
    double saldo;
};
struct cuentasBanc * transferir(struct cuentasBanc *cuentasBancaria)
{
    long origen, destino;
    double cantidad;
    printf("\t\tNumero de origen: ");
    scanf("%d",&origen);
    printf("\t\tNumero de destino: ");
    scanf("%d",&destino);
    printf("\t\tCantidad: ");
    scanf("%lf",&cantidad);
    
    for (int i = 0; i < 3; i++)
    {
      
        if ( cuentasBancaria[i].cuenta == origen)
        {
            cuentasBancaria[i].saldo= cuentasBancaria[i].saldo-cantidad;
        }
    }
    for (int i = 0; i < 3; i++)
    {
      
        if (cuentasBancaria[i].cuenta == destino)
        {
          
            cuentasBancaria[i].saldo = cuentasBancaria[i].saldo + cantidad;
        }
    }
    return cuentasBancaria;
}
int main()
{
    struct cuentasBanc *cuentas;
    struct cuentasBanc *cr;
    cuentas = malloc(3 * sizeof ( * cuentas));
    cr = malloc(3 * sizeof ( * cuentas));
    for (int i=0; i< 3; i++){
    printf("\t\tNombre: ");
    scanf("%s",&cuentas[i].nombre);
    printf("\t\tapellido: ");
    scanf("%s",&cuentas[i].apellido);
    printf("\t\tcuenta: ");
    scanf("%d",&cuentas[i].cuenta);
    printf("\t\tsaldo: ");
    scanf("%lf",&cuentas[i].saldo);
    }
    cr=transferir(cuentas);
    printf("saldo nuevo es : %lf \n", cr[0].saldo);
    printf("saldo nuevo es : %lf \n", cr[1].saldo);
     printf("saldo nuevo es : %lf \n", cr[2].saldo);
     return 0;
}