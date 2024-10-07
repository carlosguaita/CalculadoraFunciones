#include <stdio.h>
#include "funciones.h"

void menu(int opcion, float m, float n){
    float result;
    switch (opcion)
    {
    case 1:
        result=suma(m,n);
        printf("La suma es: %.2f\n",result);
        break;
    case 2:
        result=resta(m,n);
        printf("La resta es: %.2f\n",result);
        break;
    case 3:
        result=multiplicacion(m,n);
        printf("La multiplicacion es: %.2f\n",result);
        break;
    case 4:
        result=division(m,n);
        printf("La division es: %.2f\n",result);
        break;
    default:
        printf("No existe la opcion\n");
        break;
    }
}


float leerDato(int num){
    float x=0;
    printf("Ingrese el numero %d: ",num);
    scanf("%f",&x);
    return x;
}

float suma(float a, float b){
    float res=a+b;
    return res;
}

float resta(float a, float b){
    float res=a-b;
    return res;
}

float multiplicacion(float a, float b){
    float res=a*b;
    return res;
}

float division(float a, float b){
    float res=0;
    if (b!=0)
    {
        res=a/b;
    }else{
        printf("No se puede realizar la division para 0\n");
    }
    return res;
}