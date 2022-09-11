/* Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
Trabajar con las siguientes variables:
 int dni = 35654123;
 int pass = 1234;
 int saldo = 150000;
 int cbu = 986323456;
 int dniIngresado = 0;
 int passIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;
 */

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    int cont = 1;
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

   while (ingresaCorrectamente==0 && intentos<=3)
   {
        intentos++;
        printf("Ingresar su DNI \n");
        scanf("%d", &dniIngresado);
        printf("Ingresar su Contrasena \n");
        scanf("%d", &passIngresado);
        if (dniIngresado==dni && passIngresado==pass)
        {
           ingresaCorrectamente++;
        }else{
            if (intentos>3)
            {
                
            }else{
                printf("Usuario o contrasena incorrecta\n");
            }            
            
        }
        
   }
   
   if (intentos>3 && ingresaCorrectamente!=1)
   {
        printf("Error, intentalo mas tarde\n");
   }else{
    while (num!=3)
    {   
        num=0;
        while (num<=0 || num>=4)
       {
        printf("1- Consultar saldo\n 2- Consultar CBU\n 3- Salir\n");
        scanf("%d",&num);
       }
       
       switch (num)
       {
       case 1: printf("Su saldo es de: %d\n", saldo);

           break;
        case 2: printf("Su CBU es: %d\n", cbu);
            break;

       default:
           break;
       }
    }          
       system("pause");
             


   }
   
    

    

}
