#include "../include/banco.h" 
#include <stdio.h>  
  
struct cuentasBanc {  
    char nombre[10];  
    char apellido[10];  
    long Nomcuenta;  
    double saldo;  
};  
 
struct cuentasBanc * depositar( struct cuentasBanc *BA ){  
    int main(){ 
        long Nomcuenta;  
        double Monto;    
  
        printf("\t\tNumero de cuenta a depositar: ");  
        scanf("%d",&Nomcuenta);  
  
        printf("\t\tCantidad: ");  
        scanf("%d",&Monto);  
      
  
        for ( int i = 0; i < 3; i++ ){  
            if ( Nomcuenta == BA[i].Nomcuenta ){  
                BA[i].saldo = BA[i].saldo + Monto;  
            }  
        } 
  
        return BA;  
    } 
} 
//gcc -c .\src\Deposito2.c -o .\obj\Deposito2.o -I .\Deposito2
//Compilar:                gcc .\Deposito2.c -o Deposito2
//Ejecutar:                .\Deposito2.exe