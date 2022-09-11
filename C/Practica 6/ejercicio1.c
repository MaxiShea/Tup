/* /* LC1 - Ejercicio Integrador 5

HACERLO CON ESTRUCTURA.

Abrí en VSCode el archivo de nombre preParcial.c y completa el código de manera que el
programa resuelva el siguiente enunciado:

Desarrollar un programa que permita gestionar los envíos de un negocio mayorista de venta
de artículos de limpieza. Al comenzar el día se cargan 50 pedidos que fueron aprobados para
su despacho durante la jornada.
De los pedidos planificados para enviar se conoce su número de identificación, su peso, el
destino, la hora planificada de despacho y el estado. Dónde:
- Número de identificación: Un entero entre 100 y 999.
- Peso: Una cantidad en kilos.
- Destino: Un entero entre 1 y 4 (1- Rosario, 2- Funes, 3- Roldan, 4- Baigorria).
- Hora planificada: Un número entero entre 8 y 22.
- Estado: Un número donde 0 significa pendiente y 1 significa despachado.

Se deberá presentar un menú con las siguientes opciones:
1. Cargar envíos planificados.
2. Mostrar envíos planificados.
3. Modificar estado de un envío.
4. Mostrar envíos para un destino.
5. Salir.
La opción 1 permite cargar los 50 envíos ingresando para cada uno: número de envío, peso,
destino, hora planificada y estado.
La opción 2 debe mostrar en la consola el listado de los envíos.
La opción 3 debe pedir el número del envío al cual se desea modificar su estado y el nuevo
estado (0 o 1).
La opción 4 debe pedir un destino (1, 2, 3 o 4) y mostrar en la consola los envíos planificados
para el destino ingresado.
SOLO se saldrá de la aplicación si se selecciona la opción 5.
Ejemplo de salida de opción 2:
---- ENVIOS PLANIFICADOS ----
584 258.00 Roldan 15 hs Despachado
365 4650.00 Funes 16 hs Pendiente
657 2500.00 Roldan 18 hs Despachado
150 1800.00 Rosario 18 hs Pendiente
860 2500.00 Roldan 10 hs Pendiente */

#include <stdio.h>
#include <stdlib.h>

struct pedido
{
    int numerosID[50];
    float pesos[50];
    int destinos[50];
    int horasPlanificadas[50];
    int estados[50];
};



const int tam = 50;

void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);

void main()
{
    int opcion = 0;
    int des = 0; 
    

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    //Cargar envíos planificados
                    cargarEnvios();
                    break;
                case 2: 
                    //Mostrar envíos planificados
                    mostrarEnvios();
                    break;
                case 3: 
                    //Modificar estado de un envío  
                    modificarEstadoDeUnEnvio();
                    break;
                case 4: 
                    //Mostrar envíos para un destino
                    printf("Destino a buscar: ");
                    printf("\n1- Rosario");
                    printf("\n2- Funes");
                    printf("\n3- Roldan");
                    printf("\n4- Baigorria");
                    printf("\n");
                    scanf("%i", &des);

                    mostrarEnvioParaDestino(des);

                    break;
                default:
                    printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 5);
}

void cargarEnvios()
{    
    struct pedido pedidos[5];

    printf("--Ingrese los datos de los env%cos--\n", 161);

    for(int i = 0; i < tam; i++)
    {
        do{
            printf("Nro. de env%co: ", 161);	
            scanf("%d", &pedidos[i].numerosID[i]);
            if(pedidos[i].numerosID[i]<=100 || pedidos[i].numerosID[i]>1000){

                printf("error, el Nro de envio no puede ser menor o igual a 100 o mayor a 1000. Vuleve a intentarlo:\n");
            }
        }while (pedidos[i].numerosID[i]<=100 || pedidos[i].numerosID[i]>1000);
        
        do
        {
            printf("Ingrese el peso: ");
            scanf("%f", &pedidos[i].pesos[i]);
            if (pedidos[i].pesos[i]<=0)
            {
               printf("error, el peso no puede ser menor o igual a 0. Vuleve a intentarlo:\n");
            }
              
        } while (pedidos[i].pesos[i]<=0);
        
        
      do
      {
            printf("Ingrese el destino: ");
            printf("\n1- Rosario");
            printf("\n2- Funes");
            printf("\n3- Roldan");
            printf("\n4- Baigorria");
            printf("\n");
            scanf("%i", &pedidos[i].destinos[i]);
            
        if (pedidos[i].destinos[i]<1 || pedidos[i].destinos[i]>4)
        {
            printf("error, vuelve a intentarlo:\n");
        }
        
      } while (pedidos[i].destinos[i] <1 || pedidos[i].destinos[i]>4);
        
     
        do
        {
            
            printf("Ingrese la hora: ");
            scanf("%d", &pedidos[i].horasPlanificadas[i]);
            if(pedidos[i].horasPlanificadas[i]<8 || pedidos[i].horasPlanificadas[i]>22){
                printf("error, la hora no puede ser menor a 8 o mayor a 22. Vuleve a intentarlo:\n");
            }
        } while (pedidos[i].horasPlanificadas[i]<8 || pedidos[i].horasPlanificadas[i]>22);
        
        do
        {
            printf("Ingrese el estado: ");
            printf("\n0- Pendiente");
            printf("\n1- Despachado");
            printf("\n");
            scanf("%d", &pedidos[i].estados[i]);
            if (pedidos[i].estados[i]<0 || pedidos[i].estados[i]>1)
            {
                  printf("error. Vuleve a intentarlo:\n");
            }
            
        } while (pedidos[i].estados[i]<0 || pedidos[i].estados[i]>1);
        
       
    }
}

void mostrarEnvios()
{
    struct pedido pedidos[5];
    
    printf("Nro\t Peso\t Dest\t\t Hora\t Estado\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d \t", pedidos[i].numerosID[i]);
        printf(" %.2f \t", pedidos[i].pesos[i]);
        switch(pedidos[i].destinos[i])
        {
            case 1:
                printf("Rosario\t");
                break;
            case 2:
                printf("Funes\t");
                break;
            case 3:
                printf("Roldan\t");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %dhs \t", pedidos[i].horasPlanificadas[i]);

        switch(pedidos[i].estados[i])
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
    }
}

void modificarEstadoDeUnEnvio()
{
    struct pedido pedidos[5];

    int nroID = 0, est = 0, i=0;
    int encontrado = 0;

	printf("Nro del env%co a modificar:", 161);	
    scanf("%d", &nroID);
    for ( i = 0; i < tam; i++)
    {
        if (nroID==pedidos[i].numerosID[i])
        {
            do
            {
                printf("el nuevoestado (0 o 1) \n");
                scanf("%d",&est);
                if (est<0 || est>1)
                {
                    printf("error\n");
                }
                
            } while (est<0 || est>1);
            
            
            pedidos[i].estados[i]=est;
            encontrado=1;
        }
        
    }
    if (encontrado==0)
    {
        printf("No se encontro\n");
    }
    
}

void mostrarEnvioParaDestino(int destino)
{
    struct pedido pedidos[5];

    for (int i = 0; i < tam; i++)
    {
        if (pedidos[i].destinos[i]==destino)
        {
                printf(" %d \t", pedidos[i].numerosID[i]);
        printf(" %.2f \t", pedidos[i].pesos[i]);
        switch(pedidos[i].destinos[i])
        {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %d hs \t", pedidos[i].horasPlanificadas[i]);

        switch(pedidos[i].estados[i])
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
        }
        
    }
    
}