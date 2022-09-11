/* Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
"nombre apellido" para cada uno, y mostrar por consola. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char nombre [20] [20];
    char apellido [20] [20]; 
    char nombreapellido [20];
    
    int i;



    printf("Escribe el nombre y apellido \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%s", nombre[i]);  
        scanf("%s", apellido[i]);
          
    }

    for ( i = 0; i < 10; i++)
    {
        strcat(nombre[i], " ");  
        printf("- %s\n", strcat(nombre[i], apellido[i]));    
    }
       
  

    

    system("pause");
    
}