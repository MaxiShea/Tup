/* Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman. */

#include <stdio.h>
#include <stdlib.h>


void main()
{
    int contador;
    float numero;
    numero = 0;
    contador = 0;
    

    do
    {
        printf("Ingrese un numero real (0 para terminar el programa):\n");
        scanf("%f", &numero);        
        contador++;
    } while (numero !=0);
    printf("La cantidad de numeros ingresado es: %d \n", contador-1);
    system("pause");
    
    
}