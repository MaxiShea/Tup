/* Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio. */

#include <stdio.h>
#include <stdlib.h>


void main()
{
    int opcion, contador;
    float suma, nota, promedio;
    nota=0;
    suma=0;
    promedio=0;
    contador=0;


    do
    {
        opcion = 0;
        while (nota <= 0)
        {
            printf("Ingrese la NOTA: \n");
            scanf("%f", &nota);
        }
        while (opcion <1 || opcion >2)
        {
            printf("Quiere ingresar otra nota?\n");
            printf("1.Si        2.No\n");
            scanf("%d", &opcion);
        }

        suma = suma + nota;
        promedio = promedio + nota;
        contador++;
        nota = 0;
        
        
    } while (opcion != 2);
    promedio = promedio / contador;
    printf("La suma de los numeros ingresado es: %0.1f\n", suma);
    printf("El promedio es: %0.1f\n", promedio);
    system("pause");
    
}