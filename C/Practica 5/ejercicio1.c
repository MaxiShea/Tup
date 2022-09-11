/* 1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: 
“Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.
*/

#include <stdio.h>
#include <stdlib.h>

void main()

{

    int num[5] = { 2, 5, 15, 20, 25 };

    for (int i = 0; i < 5; i++)
    {
        printf("Indice %d, Valor %d \n",i, num[i]);
    }

    printf("------------------\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("Indice %d, Valor %d \n",i, num[i]);
    }
    

    system("pause");

   
    

}
