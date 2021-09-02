#include "../include/banco.h"
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