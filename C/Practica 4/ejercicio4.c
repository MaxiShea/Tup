/* Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso */


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, f, alumnos, parciales;
    float  notas, promedio, totalpromedio;
    i = 0;
    f = 0;
    parciales = 0;
    notas = 0;
    alumnos = 0;
    promedio = 0;
    totalpromedio = 0;

    while ( alumnos <= 0 )
    {
        printf("Ingrese la cantidad de Alumnos:\n");
        scanf("%d", &alumnos);
    }

    while ( parciales <= 0)
    {
        printf("Ingrese la cantidad de parciales:\n");
        scanf("%d", &parciales);
    }

    for (i = 0; i < alumnos; i++)
    {
        for ( f = 0; f < parciales; f++)
        {
            while ( notas <= 0)
            {
            printf("Ingresa la nota del parcial %d del alumno %d:\n", f+1,  i+1);
            scanf("%f", &notas);
            }
            promedio = promedio + notas;
            notas = 0;
        }
        promedio = promedio / f;
        printf("El promedio del alumno %d es de: %0.1f\n", i+1, promedio);
        totalpromedio = totalpromedio + promedio;
        promedio=0;
        
    }
    totalpromedio=totalpromedio/alumnos;
    printf("-------------------------------\n");
    printf("El Promedio general es de: %0.1f \n", totalpromedio);
    printf("-------------------------------\n");
    system("pause");
    
    
    
}


