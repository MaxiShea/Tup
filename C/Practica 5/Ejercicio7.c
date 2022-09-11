/* Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantidadnotas;
    float suma;
    float promedio;

    printf("Ingrese la cantidad de notas\n");
    scanf("%d", &cantidadnotas);

    float notas[cantidadnotas];

    for (int i = 0; i < cantidadnotas; i++)
    {
        printf("Ingrese la nota %d\n", i+1);
        scanf("%f", &notas[i]);

        suma = suma + notas[i];
        promedio = suma / cantidadnotas;
    }

    printf("La suma es de: %.2f\n", suma);
    printf("El promedio es: %2.f\n", promedio);

    system("pause");
    
}
    

   
    

 



