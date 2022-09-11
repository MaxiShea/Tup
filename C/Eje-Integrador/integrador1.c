// La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
// dependen de:
// ● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
// ● Número de pasajeros que lleve
// ● Tipo horario del día:
// Horario A: horas de “Alta” congestión:
// ● Los automóviles con tres pasajeros o más no pagan peaje
// ● Los camiones pagan $300
// ● Las motos pagan $100
// Horario B: horas de “Baja” congestión:
// ● Los automóviles pagan $150
// ● Los camiones pagan $200
// ● Las motos no pagan peaje
// En este horario la tarifa es independientemente del número de pasajeros.
// Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
// y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
// de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.

#include <stdio.h>
#include <stdlib.h>


void main(){
    int vehiculo, pasajero, hora, peaje;
    
    
  
    peaje=0;
        printf("Tipo de veh%cculo:\n",161);
        printf("1.cami%cn    2.automovil     3.moto\n",162);
        scanf("%d", &vehiculo);
        if (vehiculo!=1 && vehiculo!=2 && vehiculo!=3)
        {
           do
           {
            printf("error, vuelve a intentarlo\n");
            printf("Tipo de veh%cculo:\n",161);
            printf("1.cami%cn    2.automovil     3.moto\n",163);
            scanf("%d", &vehiculo);
           } while ( vehiculo< 1 || vehiculo > 3);
           
        }
           printf("Ingrese el n%cmero de pasajeros\n",163);
           scanf("%d", &pasajero);
        if (pasajero<=0 || pasajero>5)
         {
            do
            {
            printf("Error de pasajeros, vuelve a ingresarlo\n");
            printf("Ingrese numero de pasajeros\n");
            scanf("%d", &pasajero);
            }while(pasajero<1 || pasajero>5);
         }
    
    printf("Ingrese tipo de horario:\n");
    printf("1.Congenti%cn ALta  2.Congenti%cn Baja\n",162,162);
    scanf("%d",&hora);
    if (hora!=1 && hora!=2)
    {
        do
        {
            printf("error de tipo de horario, vuelve a ingresarlo\n");
            printf("Ingrese tipo de horario:\n");
            printf("1.Congenti%cn ALta  2.Congenti%cn Baja\n",162,162);
            scanf("%d",&hora);
        }while(hora<1 || hora>2);
    }
    
    if (hora==1)
    {   
        
        if (vehiculo==2)
        {
            if (pasajero<3)
            {
               peaje=150;
            printf("--------------------------------\n");
            printf("Tipo de Horario: Alta Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Automovil\n");
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");
            system("pause");
           

              
            }else{
            printf("--------------------------------\n");
            printf("Tipo de Horario: Alta Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Automovil\n");
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");
            system("pause");
           

            }
            
        }else if (vehiculo==1)
        {
            peaje=300;
            printf("--------------------------------\n");
            printf("Tipo de Horario: Alta Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Cami%cn\n",162);
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");
            system("pause");
           
            
        }else{
            peaje=100;
            printf("--------------------------------\n");
            printf("Tipo de Horario: Alta Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Moto\n");
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");
            system("pause");
          

            
        }
        

    }else
    {
        
        if (vehiculo==2)
        {
            peaje=150;
            printf("--------------------------------\n");
            printf("Tipo de Horario: Baja Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Automovil\n");
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");
            system("pause");
            

            
           
        }else if (vehiculo==1){
            peaje=200;
            printf("--------------------------------\n");
            printf("Tipo de Horario: Baja Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Cami%cn\n",162);
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");

            system("pause");
            
            

        }else{
            peaje=0;
            printf("--------------------------------\n");
            printf("Tipo de Horario: Baja Congesti%cn\n",162);
            printf("Tipo de Vehiculo: Moto\n");
            printf("El numero de pasajeros es de: %d\n", pasajero);
            printf("La tarifa es de: $%d\n", peaje);
            printf("--------------------------------\n");

            system("pause");
            
        }

    }
   


}