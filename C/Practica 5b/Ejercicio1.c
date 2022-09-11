/* Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char cadena1[50][50];
   int i, longitud [3];

   for ( i = 0; i < 3; i++)
   {
        printf("Escribe la cadena %d\n", i+1);
        scanf("%s", &cadena1[i]);
             
   }

   for ( i = 0; i < 3; i++)
   {
       longitud[i] = strlen(cadena1[i]);
       printf("La longitud de la cadena %d es: %d\n", i+1, longitud[i]);   
   }
   



  
    


}