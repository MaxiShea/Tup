/* Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num[5] = {5, 7, 10, 15, 20};
    int suma = 0;
    float promedio;

    for (int i = 0; i < 5; i++)
    {
       
        suma += num[i];
        promedio = suma / 5;
        
    }

     printf("La suma de los componentes es: %d \n", suma);
     printf("El promedio de los componentes es: %.1f \n", promedio);
     
     system("pause");


    



}