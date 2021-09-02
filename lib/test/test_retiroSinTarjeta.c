#include "../include/banco.h" 
#include <stdio.h> 
#include <stdlib.h>
/* @brief función que hace un retiro de un cajero
*  @params struct cuentasBanc, char nombre[10], char apellido[10]
*  @params long cuenta, double saldo.
*  @returns struct cuentasBanc* 
*/
struct cuentasBanc{ 
    char nombre[10]; 
    char apellido[10]; 
    long cuenta; 
    double saldo; 
}; 

struct cuentasBanc* retirarSinTarjeta(struct cuentasBanc*,long int);

 int main(int argc, const char *argv[]){
     struct cuentasBanc *a = malloc(3 * sizeof(struct cuentasBanc));
            for (size_t i = 0; i < 3 ;i++)
            {
                /* code */
                printf("\nNombre:");
                scanf("%s",a[0].nombre);
                printf("\nApellido:");
                scanf("%s",a[0].apellido);
                printf("\nNo. cuenta:");
                scanf("%li",&a[0].cuenta);
                printf("\nsaldo: ");
                scanf("%f",&a[0].saldo);
            }
            
           

         

         long int random = 12345;
         a=retirarSinTarjeta(a,random);
 }

struct cuentasBanc* retirarSinTarjeta(struct cuentasBanc *bankAccount, long int random){     
    long cuenta; 
    double cantidad; 
    long int NIP; 
    
    printf("\n\t\tNo. de cuenta: "); 
    scanf("%d",&cuenta); 
    printf("\n\t\tCantidad a retirar: "); 
    scanf("%d",&cantidad); 
    printf("\n\t\tNIP retiro sin tarjeta: "); 
    scanf("%d",&NIP); 
 
    if ( NIP == random ){ 
        printf("\n\t\tAqui tiene sus $%d",cantidad); 
         
        for( int i = 0; i < 3; i++ ){ 
            if ((bankAccount[i].cuenta == cuenta)){ 
                bankAccount[i].saldo = bankAccount[i].saldo - cantidad; 
            } 
        } 
    } 
}