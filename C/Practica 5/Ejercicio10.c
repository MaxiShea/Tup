/* . Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz=3;

    printf("Escriba el tamaño de la matriz cuadrada X :\n");
    scanf("%d", &matriz);

    int x [matriz][matriz];

    printf("Ingrese los valores de la matriz X %dx%d: \n", matriz, matriz);
    
    for (int i = 0; i < matriz; i++)
    {
        for (int j = 0; j < matriz; i++)
        {
            scanf("%d", &x [i][j]);
        }
        
    }
    


}