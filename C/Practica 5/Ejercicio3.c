/* . Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5. */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num[5];
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor del array %d:\n",i+1, num[5]);
        scanf("%d", &num[i]);

        if (num[i] == 5)
        {
            contador++;
        
        }
        
    }

    printf("Veces que se repite el numero 5 en el array: %d\n", contador);


    system("pause");
    
}