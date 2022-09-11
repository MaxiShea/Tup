#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_STRLEN 3

void cargaDatos(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50]);
char modificarStock(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50]);
void mostrarDatos(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50]);
void productosSinStock(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50]);


void main()
{
    /*Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5 */


    char electrodomesticos[MAX_STRLEN][50];
    char codigo_barras[MAX_STRLEN][50];
    char cantidad_stock[MAX_STRLEN][50];
    int opc;

    do
    {
        printf("1. Cargar productos.\n2. Modificar stock.\n3. Mostrar productos sin stock.\n4. Listar productos.\n5. Salir.\n");
        scanf("%i", &opc);
        switch (opc)
        {
        case 1:
            cargaDatos(electrodomesticos, codigo_barras, cantidad_stock);
            mostrarDatos(electrodomesticos, codigo_barras, cantidad_stock);
            break;
        case 2:
            modificarStock(electrodomesticos, codigo_barras, cantidad_stock);
            mostrarDatos(electrodomesticos, codigo_barras, cantidad_stock);
            break; 
        case 3:
            productosSinStock(electrodomesticos, codigo_barras, cantidad_stock);
            break;  
        case 4:
            mostrarDatos(electrodomesticos, codigo_barras, cantidad_stock);
            break;           
        
        default:
            break;
        }
    } while (opc != 5);
    


}

void cargaDatos(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50])
{
    bool validar;
    validar=true;
    int j, i, i2;
    char ingresado[MAX_STRLEN][50];
    i=0;
    printf("Ingrese los electrodomesticos\n, presione 0 para finalizar la carga\n");
    while (i < MAX_STRLEN && validar == true)  
    {
        j=0;
        while (j<3 && validar == true)
        {

            switch (j)
            {
            case 0:
                printf("ingrese el codigo de barras\n");
                scanf("%s", ingresado[i]);

                if (strcmp(ingresado[i], "0")==0)
                {
                    validar=false;
                    for (i2=i; i < MAX_STRLEN; i++)
                    {
                        strcpy(electrodomesticos[i], "-");
                        strcpy(codigo_barras[i], "-");
                        strcpy(cantidad_stock[i], "-");
                    }
                    i2=0;
                    
                }
                if (validar==true)
                {
                    strcpy(codigo_barras[i], ingresado[i]);
                }
                break;
            case 1:
                printf("ingrese la descripcion\n");  
                scanf("%s", ingresado[i]);
                if (strcmp(ingresado[i], "0")==0)
                {
                    validar=false;
                    for (i2=i; i < MAX_STRLEN; i++)
                    {
                        strcpy(electrodomesticos[i], "-");
                        strcpy(codigo_barras[i], "-");
                        strcpy(cantidad_stock[i], "-");
                    }
                    i2=0;
                }
                if (validar==true)
                {
                    strcpy(electrodomesticos[i], ingresado[i]);
                }
                break;
            case 2:
                printf("ingrese la cantidad en stock\n");
                scanf("%s", cantidad_stock[i]);
                
            default:
                break;
            }
            j++;
        }
    i++; 
    }
}  



char modificarStock(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50])
{
    char codigo_barras_ingresado[50], stockIngresado[50];

    printf("ingrese el codigo de barras\n");
    scanf("%s", codigo_barras_ingresado);

    for (int i = 0; i < MAX_STRLEN; i++)
    {

        if (strcmp(codigo_barras_ingresado, codigo_barras[i]) == 0)
        {
            printf("ingrese el nuevo stock\n");
            scanf("%s", stockIngresado);
            strcpy(cantidad_stock[i], stockIngresado);
        }
        
    } 

}

void mostrarDatos(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50])
{
    for (int i = 0; i < MAX_STRLEN; i++)
    {
        printf("| %s | %s | %s |\n", electrodomesticos[i], codigo_barras[i], cantidad_stock[i]);
    }
    
}

void productosSinStock(char electrodomesticos[][50], char codigo_barras[][50], char cantidad_stock[][50])
{
    for (int i = 0; i < MAX_STRLEN; i++)
    {
        if (strcmp(cantidad_stock[i],"0")==0)
        {
            printf("| %s | %s | %s |\n", electrodomesticos[i], codigo_barras[i], cantidad_stock[i]);
        }
        
    }
}