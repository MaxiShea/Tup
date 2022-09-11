/* Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
el 2,5% de la suma de sus ventas */

#include <stdio.h>
#include <stdlib.h>

void main()
{



float venta, comision , totalventa;
int i, contador;

for ( i = 1; i < 6; i++)
{
    contador = 0;
    comision = 0;
    venta = 1;
    totalventa = 0;

    while (venta != 0)
    {
        do
        {
            venta = 0;
            printf("Ingrese el importa de la venta realizada %d: (0 para finalizar)\n", i);
            scanf("%f", &venta);

        } while ( venta <0);
        
        totalventa = totalventa + venta;
        contador = contador + 1;
        
    }
    comision = (totalventa*0.25) / 100;

    switch (i)
    {
    case 1:
        printf("\n");
        printf("Vendedor A\n");
        printf("Cantidad de ventas realizadas: $%d\n",contador -i);
        printf("Monto total de las Ventas: $%0.1f\n", totalventa);
        printf("Comision a cobrar: $%0.1f\n", comision);
        printf("\n");
        break;

    case 2:
        printf("\n");
        printf("Vendedor B\n");
        printf("Cantidad de ventas realizadas: $%d\n", contador);
        printf("Monto total de las Ventas: $%0.1f\n", totalventa);
        printf("Comision a cobrar: $%0.1f\n", comision);
        printf("\n");
        break;

    case 3:
        printf("\n");
        printf("Vendedor C\n");
        printf("Cantidad de ventas realizadas: $%d\n", contador);
        printf("Monto total de las Ventas: $%0.1f\n", totalventa);
        printf("Comision a cobrar: $%0.1f\n", comision);
        printf("\n");
        break;

    case 4:
        printf("\n");
        printf("Vendedor D\n");
        printf("Cantidad de ventas realizadas: $%d\n", contador);
        printf("Monto total de las Ventas: $%0.1f\n", totalventa);
        printf("Comision a cobrar: $%0.1f\n", comision);
        printf("\n");
        break;
    
    default:
        printf("\n");
        printf("Vendedor E\n");
        printf("Cantidad de ventas realizadas: $%d\n", contador);
        printf("Monto total de las Ventas: $%0.1f\n", totalventa);
        printf("Comision a cobrar: $%0.1f\n", comision);
        printf("\n"); 
        break;
    }

    system("pause");
    
}


}
