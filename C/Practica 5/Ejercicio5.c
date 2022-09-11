/* Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
- Informar la inflación anual
- Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
- Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    float vec[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float total = 0;
    float max = vec[0];
    float min = vec[0];
    int mesmax = 0, mesmin = 0;

    for (int i = 0; i < 12; i++)
    {
        total = total + vec[i];
        
        if ( vec[i] > max)
        {
            max = vec[i];
            mesmax = i+1;

        }

        if (vec[i] < min)
        {
            min = vec[i];
            mesmin = i+1;
        }
        
        


    }

    printf("La inflacion anual es: %.2f\n", total);
    printf("Maxima inflacion: %.2f MES: %d\n", max, mesmax);
    printf("Minima inflacion: %.1f MES: %d \n", min, mesmin);
    








    
    
    
    
}



    