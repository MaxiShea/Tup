/* Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int num1[5];
    int num2[5];
    
    int i;


    for ( i = 0; i < 5; i++)
    {
        printf("Escribe un numero\n");
        scanf("%d", &num1[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        num2[i] = num1[i]*2;
    }

    for (i = 0; i < 5; i++)
    {
        printf("El segundo array multiplcado es: %d\n", num2[i]);
    }

    system("pause");

    
    
    
    


}