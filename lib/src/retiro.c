#include "../include/banco.h" 
#include <stdio.h> 
/* @brief función que hace un retiro de un cajero
*  @params struct cuentasBanc, char nombre[10], char apellido[10]
*  @params long cuenta, double saldo.
*  @returns struct cuentasBanc* 
*/
struct cuentasBanc { 
    char nombre[10]; 
    char apellido[10]; 
    long cuenta; 
    double saldo; 
}; 
 
struct cuentasBanc*  retirarSinTarjeta( struct cuentasBanc *bankAccount, long int random){     
    long cuenta; 
    double cantidad; 
    long int NIP; 
     
    printf("\n\t\tNo. de cuenta: "); 
    scanf("%d",&cuenta); 
    printf("\n\t\tCantidad a retirar: "); 
    scanf("%lf",&cantidad); 
    printf("\n\t\tNIP retiro sin tarjeta: "); 
    scanf("%d",&NIP); 
 
    if ( NIP == random ){ 
        printf("\n\t\tAqui tiene sus $%lf",cantidad); 
         
        for( int i = 0; i < 3; i++ ){ 
            if ((bankAccount[i].cuenta == cuenta) && (bankAccount[i].saldo>=cantidad)){ 
                bankAccount[i].saldo = bankAccount[i].saldo - cantidad; 
            } 
        } 
    } 
    
}