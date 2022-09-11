// Realizar un programa que permita registrar los datos para una venta de $4600. Para
// ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
// que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
// medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
// una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
// Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
// pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
// 6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
// caso contrario informar la situación y finalizar programa. Por último, presentar un
// resumen de la operación, por ejemplo:
// DNI: 38.456.123
// Medio de pago: Tarjeta de crédito
// Tarjeta: Cabal
// Cuotas: 3
// Total: $4784

#include <stdio.h>
#include <stdlib.h>

void main(){

int dni, pago, card, cuota;
float interes, venta;
char mPago[]="Tarjeta de Credito";
 

venta=4600;


printf("Ingresar su DNI:\n");
scanf("%d",&dni);


if (dni <= 1000000 || dni >= 99999999 )
{
   do{
   printf("DNI invalido\n");
   printf("Vuelve a ingresarlo:\n");
   scanf ("%d",&dni);
  
   }while (dni <= 1000000 || dni > 99999999);
}

 printf("Seleccionar medio de pago\n 1-Efectivo\n 2-Tarjeta de credito\n");
 scanf("%d",&pago);
 if (pago!=1 && pago!=2)
 {
    do{
    printf("Eleccion invalida\n");
    printf("Vuelve a intentarlo:\n");
    printf("Seleccionar medio de pago\n 1-Efectivo\n 2-Tarjeta de credito\n");
    scanf ("%d",&pago);
     }while(pago <= 0 || pago > 2);
 }

 if (pago==2)
 {
   printf("1-Visa\n 2-American Express\n 3-Mercado Pago\n 4-Cabal\n");
   scanf("%d",&card);
   if (card!=1 && card!=2 && card!=3 &&card!=4)
   {
        do{
    printf("Eleccion invalida\n");
    printf("Vuelve a intentarlo:\n");
     printf("1-Visa\n 2-American Express\n 3-Mercado Pago\n 4-Cabal\n");
    scanf ("%d",&card);
     }while(card <= 0 || card > 4);
   }
   do
 {  
    printf("cantidad de cuotas en las que abonara (1, 3, 6 o 12)\n");
    scanf("%d",&cuota);
 } while (cuota!=1 && cuota!=3&& cuota!=6 && cuota!=12);
 if(cuota==3){
        interes = venta*0.04;
        venta = venta + interes; 

    }else if (cuota==6){
        interes = venta*0.08;
        venta = venta + interes; 

    }else if (cuota==12){
        interes = venta * 0.08;
        venta = venta + interes; 

    }
    printf("DNI: %d\n", dni);
    printf("Modelo a pagar: %s\n", mPago);
    printf("Cuotas: %d\n", cuota);
    printf("Total: %0.2f\n", venta);
    system("pause");

 }else{
    printf("DNI: %d\n", dni);
    printf("Modelo a pagar: Efectivo\n");
    printf("Total: %0.2f\n", venta);
    system("pause");
 }

}