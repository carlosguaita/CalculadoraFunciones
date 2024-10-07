#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float x1, x2;
    int opc1=0, opc2=0;
    do{
    x1=leerDato(1);
    x2=leerDato(2);
    printf("Seleccione un opcion:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n>>");
    scanf("%d",&opc1);
    menu(opc1,x1,x2);
    printf("Desea realizar otra operacion:\n1.Si\n2.No\n>>");
    scanf("%d",&opc2);
    }while(opc2==1);
    return 0;
}

