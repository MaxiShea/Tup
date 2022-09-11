/* Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[] = {10,20,5,15,30,20};
    int total = 0;
    int mayor = 0;
    int contador = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Indice %d \t Valor %d\n", i, vec[i]);
        total = total + vec[i];

        if (i%2 == 1)
        {
            printf("Posicion Impar %d Valor %d\n",i ,vec[i]);
        }

        if (vec[i]%2 == 1)
        {
            printf("Contenido Impar %d Posicion %d\n", vec[i], i);
        }

        if (vec[i] > mayor )
        {
            mayor = vec[i];        
        }

        if (vec[i] == 20)
        {
            contador++;
        }
                   
    }

    printf("El mayor es: %d\n",mayor);
    printf("El total es: %d\n",total);
    printf("El numero 20 aparece %d veces\n", contador);

    system("pause");
    return 0;

    
    
    
}
 