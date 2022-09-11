/* Retomamos dos ejercicios de la Práctica 2, para reescribirlos pensando en
funciones.
Pedir al usuario que ingrese dos números. Luego presentar el siguiente
menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
 Seleccione una operación:
 Mostrar el resultado de la operación seleccionada. */

#include <stdio.h>
#include <stdlib.h>

float suma (float num1, float num2);
float resta (float num1, float num2);
float multiplicar (float num1, float num2);
float dividir (float num1, float num2);

void main()
{
    float numero1;
    float numero2;
    float resultado;
    int opcion;

    printf("Ingresa el primer numero\n");
    scanf("%f", &numero1);
    printf("Ingresa el segundo numero\n");
    scanf("%f", &numero2);

    do
    {

    printf("Seleccione una operacion:\n");
    printf("1. Informar su suma\n");
    printf("2. Informar su resta\n");
    printf("3. Informar su multiplicacion\n");
    printf("4. Informar su division\n");
    printf("5. Salir\n");    
    scanf("%d", &opcion);

    
        switch (opcion)
        {
        case 1:
            resultado = suma (numero1, numero2);
            printf("La suma es: %0.2f\n",resultado);
            break;
        case 2:
            resultado = resta (numero1,numero2);
            printf("La resta es: %0.2f\n",resultado);
            break;
        case 3:
            resultado = multiplicar (numero1, numero2);
            printf("La multiplicacion es: %0.2f\n", resultado);
            break;
        case 4:
            resultado = dividir (numero1, numero2);
            printf("La division es: %0.2f\n", resultado); 
            break;
        case 5:
        break;
        default:
            printf("Opcion incorrecta\n");
            break;
        }
        
    } while (opcion != 5);
     

}

  float suma (float num1, float num2)
    {
        float respuesta;
        respuesta = num1 + num2;
        return respuesta;
    }

    float resta (float num1, float num2)
    {
        float respuesta;
        respuesta = num1 - num2;
        return respuesta;
    }
    float multiplicar (float num1, float num2)
    {
        float respuesta;
        respuesta = num1 * num2;
        return respuesta;
    }
     float dividir (float num1, float num2)
    {
        float respuesta;
        respuesta = num1 / num2;
        return respuesta;
    }
    