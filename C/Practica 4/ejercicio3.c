/* Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados */


#include <stdio.h>
#include <stdlib.h>


void main()
{

    int cont, i, suma, num;
    num = 0;
    suma = 0;
    cont = 1;

    while (cont<=10)
    {
        while (num<=0)
        {
            printf("Ingrese el numero %d: \n", cont);
            scanf("%d", &num);
        }

        suma = suma + num;
        num = 0;
        cont++;      
    }

    printf("La suma de los numero es de: %d\n", suma);
    

      






    system("pause");
}