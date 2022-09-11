/* Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array. */


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arreglo[5];
    int arreglo2[5];
    int arreglo3[10];
    int i;


    for ( i = 0; i < 5; i++)
    {
        printf("Escriba los 5 numeros del primer array:\n");
        scanf("%d", &arreglo[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("Escriba los 5 numeros del segundo array:\n");
        scanf("%d", &arreglo2[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        arreglo3[i] = arreglo[i];
    }

    for ( i = 0; i < 5; i++)
    {
        arreglo3[5+i] = arreglo2[i];
    }
    
    printf("Los numeros son:\n");

    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", arreglo3[i]);
    }

    system("pause");
    

    
    
}