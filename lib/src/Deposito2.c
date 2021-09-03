#include "../include/banco.h" 
#include <stdio.h>  
  
struct cuentasBanc {  
    char nombre[10];  
    char apellido[10];  
    long cuenta;  
    double saldo;  
};  
 
struct cuentasBanc * depositar( struct cuentasBanc *BA ){  
        long Nomcuenta;  
        double Monto;    
  
        printf("\t\tNumero de cuenta a depositar: ");  
        scanf("%d",&Nomcuenta);  
  
        printf("\t\tCantidad: ");  
        scanf("%lf",&Monto);  
      
  
        for ( int i = 0; i < 3; i++ ){  
            if ( Nomcuenta == BA[i].cuenta ){  
                BA[i].saldo = BA[i].saldo + Monto;  
            }  
        } 
  
        return BA;  
} 
