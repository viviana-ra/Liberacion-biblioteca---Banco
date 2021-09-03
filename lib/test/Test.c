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
 
int main( ){ 
     
    struct cuentasBan *BA; 
 
    depositar( BA );  
 
    return 0; 
 
}
//gcc -c .\lib\src\Test.c -o .\lib\obj\Test.o -I .\lib\Test