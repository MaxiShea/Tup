/* Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float facturacion[6];
    float total;
    float promedio;
    float max = 0;
    float min = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion del mes %d\n", i+1);
        scanf("%f", &facturacion[i]);

        total = total + facturacion[i];
        promedio = total / 6;

        if (i == 0)
        {
            max = facturacion[i];
            min = facturacion[i];
        }
        
        if (facturacion[i] > max)
        {
            max = facturacion[i];
        }
        if (facturacion[i] < min)
        {
            min = facturacion[i];
        }            
    }

    printf("La facturacion total es de %.f\n", total);
    printf("El promedio de la facturacion es %.f\n", promedio);
    printf("La facturacion maxima es; %.f\n", max);
    printf("La facturacion minima es: %.f\n", min);

    system("pause");
    
}
