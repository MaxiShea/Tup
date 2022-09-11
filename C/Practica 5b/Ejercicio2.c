/* Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    char cadena1 [50];
    char cadena2 [50];

    printf("Ingrese el primer Nombre:\n");
    gets (cadena1);
    printf("Ingrese el segundo Nombre:\n");
    gets (cadena2);

    if (strcmp(cadena1, cadena2) == 0)
    {
        printf("Los nombres son iguales\n");        
    }
    else
    {
        if (strcmp (cadena1,cadena2) > 0 )
        {
            printf("%s es mayor alfabeticamente\n", cadena1);
        }
        else
        {
            printf("%s es mayor alfabeticamente\n",cadena2);
        }
        
    }

    system("pause");
    

}