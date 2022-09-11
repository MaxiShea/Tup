/* Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
switch:
“Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num,  cont;
    float numero, numero2, suma, resta, producto, division;
  cont=0;
  numero=0;
  numero2=0;
  num=0;
  do{
    printf("Ingresar el primer numero\n");
    scanf ("%f",&numero);
   
  } while (numero <= 0);
  do{
       printf("Ingresar el segundo numero\n");
    scanf ("%f",&numero2);
   } while (numero2 <=0);
  
    
    while (num!=6)
    {       
        cont++;
        num=0;
        do
        { 
            printf("1. Informar su suma \n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Informar cantidad de operaciones realizadas \n 6. Salir\n");
                scanf ("%d",&num);
        } while (num <= 0 || num > 6);
   
   
        switch (num)
        {
        case 1:
            suma = numero + numero2;
             printf("La suma es:%0.2f\n", suma);
             
            break;
        case 2:
            resta = numero -numero2;
            printf("La resta es:%0.2f\n", resta);
            
            break;
        case 3:
            producto = numero *numero2;
            printf("La multiplicacion es:%0.2f\n", producto);
            
            break;
        case 4:
            division = numero/numero2;
            printf("La division es:%0.2f\n",division);
            
            break;
        case 5:
           cont--;
            printf("La cantidad de operaciones realizadas es de: %d\n", cont);
        default:
            printf("Nos vemos\n");
        break;
            
        }
        

    }
    
   
    system("pause");
    
}