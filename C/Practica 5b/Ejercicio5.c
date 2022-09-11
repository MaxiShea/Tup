/* Retomamos dos ejercicios de la Práctica 2, para reescribirlos pensando en
funciones. 
Escriba un programa que pida ingresar un número y a continuación
escriba en la consola si el mismo es par o impar. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool calculo(int numero);

void main()
{
    int numero;

    bool resultado=false;

    resultado = calculo(numero);
    if (resultado==true)
    {
        printf("el numero es par\n");
    }
    else
    {   
        printf("el numero es impar\n");
    }

    system("pause");
}


bool calculo(int numero)
{
    printf("ingrese un numero\n");
    scanf("%i", &numero);
    if (numero%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }  
}
