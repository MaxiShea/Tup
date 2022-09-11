/* LC1 – Parcial
Abrí en VSCode el archivo de nombre parcialA.c y completa el código de manera que el
programa resuelva el siguiente enunciado:
Desarrollar un programa que permita gestionar la carga de notas de 30 alumnos.
Se conoce el Legajo, apellido, nombre del alumno y nota final del alumno. Dónde:
- Legajo: Un número entero mayor o igual a 100000.
- Apellido: Una cadena de hasta 50 caracteres.
- Nombre: Una cadena de hasta 50 caracteres.
- Nota: Un número con decimales entre 0 y 10.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar alumnos.
2. Modificar una nota.
3. Mostrar al alumno que tiene mayor nota.
4. Listado de alumnos.
5. Salir.
La opción 1 permite cargar los 30 alumnos ingresando para cada uno: Legajo, apellido,
nombre, y nota final. Validar que el Legajo ingresado se mayor o igual a 100000, de lo
contrario pedir ingresarlo nuevamente. Validar que la nota se encuentre dentro del rango, de
lo contrario pedir ingresarla nuevamente.
La opción 2 debe pedir el Legajo del alumno al cual se desea modificar su nota y si se
encuentra se deberá pedir la nueva nota.
La opción 3 debe buscar la mayor nota y debe mostrar el Legajo del alumno con nota mayor en
la consola.
La opción 4 debe mostrar en la consola el listado de los alumnos (Legajo, apellido, nombre y
nota final).
SOLO se saldrá de la aplicación si se selecciona la opción 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int legajos [30]={0};
char apellido [30][50]={};
char nombre [30][50]={};

float nota [30]={0};

const int tam = 2;

int opcion;

void cargarAlumnos();
void modificarNota();
void mostrarAlumnoMayorNota();
void listAlumno();


void main()
{
    int opcion = 0;
    do
    {
        printf("\n1.Cargar alumnos.");
        printf("\n2.Modificar una nota.");
        printf("\n3.Mostrar al alumno que tiene mayor nota.");
        printf("\n4.Listado de alumnos.");
        printf("\n5.Salir.\n");
        scanf("%d", &opcion);

        if ( opcion!= 5)
        {
           switch ( opcion )
           {
           case 1:
            cargarAlumnos();
            break;
            case 2:
            modificarNota();
            break;
            case 3:
            mostrarAlumnoMayorNota();
            break;
            case 4:
            listAlumno();
            break;
           
           default:
            break;
           }
        }
        

    } while ( opcion!= 5 );
    
}

void cargarAlumnos()
{
    for (int i = 0; i < tam; i++)
    {
        do
        {
            printf("Ingrese el legajo del alumno\n");
            scanf("%d", &legajos[i]);
            if ( legajos[i] < 100000 )
            {
                printf("El numero de legajo debe ser mayor o igual a 100000\n");
            }
            
        } while ( legajos[i] < 100000 ); 

        do
        {
            printf("Ingrese el apellido del alumno\n");
            scanf("%s", &apellido[i]);

            if (strlen(apellido[i])> 50)
            {
                printf("El Apellido debe tener menos de 50 caracteres\n");
            }            

        } while ( strlen(apellido[i]) > 50);   

         do
        {
            printf("Ingrese el nombre del alumno\n");
            scanf("%s", &nombre[i]);

            if (strlen(nombre[i])> 50)
            {
                printf("El Nombre debe tener menos de 50 caracteres\n");
            }            

        } while ( strlen(apellido[i]) > 50);   

         do
        {
            printf("Ingrese la nota del alumno\n");
            scanf("%f", &nota[i]);

            if ( nota[i] <= 0 || nota[i] > 10 )
            {
                printf("La nota tiene que ser un numero decimal entre 0 y 10\n");
            }            

        } while ( nota[i] <= 0 || nota[i] > 10 );                         
    }        
}

void modificarNota()
{
    int modlegajo;
    int nuevanota;
    int encontrado = 0;

    do
    {
        printf("Ingrese el legajo del alumno\n");
        scanf("%d", &modlegajo);    

    for (int i = 0; i < tam; i++)
    {
        if ( modlegajo==legajos[i])
        {
            encontrado = 1;

            do
            {
               printf("Ingrese la nueva nota del alumno\n");
               scanf("%f", &nuevanota);
               if ( nuevanota <= 0 || nuevanota > 10)
               {
                 printf("La nota tiene que ser un numero decimal entre 0 y 10\n");
               }
              
            } while ( nuevanota <= 0 || nuevanota > 10);
            nota[i] = nuevanota;    
        }                            
    }

    if ( encontrado == 0)
    {
        printf("El numero de legajo no existe, vuelve a intentarlo\n");
    }

    } while ( encontrado == 0);
    

}

void mostrarAlumnoMayorNota()
{
    float mayor;
    int posicion;

    for (int i = 0; i < tam; i++)
    {
        if( i== 0)
        {
            mayor = nota[i];
            posicion = i;
        }
         else if ( mayor < nota[i])
        {
            mayor = nota[i];
            posicion = i;
        } 
    } 

    for (int i = 0; i < tam; i++)
    {
        if (nota[posicion] == nota[i])
        {
            printf("----------------------------------------------\n");
            printf("El Alumno con mayor nota es: %s %s con: %0.2f\n", nombre[i], apellido[i], nota[i]);
            printf("----------------------------------------------\n");
        }        
    }    
    
}

void listAlumno()
{
    printf("Listado de alumnos\t\t\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Alumno %d: \n", i+1);
        printf("Nombre y apellido: \t %s %s\n", nombre[i], apellido[i]);
        printf("Legajo: \t\t %d \n", legajos[i]);
        printf("Nota final: \t \t %0.2f\n\n", nota[i]);
    }

    system("pause");
    

}
