#include "./lib/include/banco.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct cuentasBanc {
    char nombre[10];
    char apellido[10];
    long cuenta;
    double saldo;
    
};

int main( void ){
    struct cuentasBanc *CB;
    CB = (struct cuentasBanc *)malloc(sizeof(struct cuentasBanc) * 3);
    int opcion;
    char temp[10];
    int *gNumero;
    long int random;


	do{
        printf("\n\t\t (1)CrearCuenta\n");
		printf("\t\t (2)Depositar\n");
        printf("\t\t (3)Transferir\n");
        printf("\t\t (4)Generar numero para retiro sin tarjeta\n");
        printf("\t\t (5)Retirar sin tarjetas\n");
        printf("\t\t (6)Salir de la aplicacion\n\n");

        printf("\t\tOpcion: ");
        fgets(temp,10,stdin);	
        opcion  = atoi(temp);

		switch(opcion){
			case 1:
				CrearCuenta( CB );
                mostrarCuentas( CB );
			break;

			case 2:
        		depositar( CB );
                mostrarCuentas( CB );
			break;
                
			case 3:
				transferir( CB );
                mostrarCuentas( CB );
			break;
                
			case 4:
                random = generarNumero( CB );
			break;
			
            case 5:
                retirarSinTarjeta( CB,random );
                mostrarCuentas( CB );
			break;

            case 6:
				printf("\n\t\t Hasta luego\n\n");
			break;
		}
	}while( opcion != 6);
    
    return 0;
}