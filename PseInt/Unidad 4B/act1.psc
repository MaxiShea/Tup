// Realizar un programa que permita al usuario de un hospital, buscar a un paciente por el 
// n�mero de DNI e informar al usuario los datos de la persona
//  Realizar una b�squeda secuencial


Proceso principal
	
	Definir i, opc Como entero
	Definir personas, dni, buscar Como Caracter	
	
    dimension personas[8,5]
	CargaDatos(personas)
	repetir
		Escribir "1. Busqueda de DNI"
		Escribir "0. Salir"
	
		leer opc
		
		Segun opc hacer
			1: busquedadni(dni,personas)
			0:
			De Otro Modo:
				escribir "Error,vuelve a intentarlo"
		FinSegun
	hasta Que opc=0
	
	
	
FinProceso




SubProceso busquedadni(dni, personas) 
	definir dniEncontrado Como Logico
	definir dnipersona, i Como Entero
	dniEncontrado=Falso
	Escribir "Ingrese el DNI:"
	leer dni
	Para i=0 hasta 7 con paso 1 Hacer
		si (dni=personas[i,2])
			dniEncontrado=Verdadero
			dnipersona= i
		FinSi
		
		
	FinPara
	si (dniEncontrado=falso)
		Escribir "No se pudo encontrar su DNI"
	sino
		Para i=0 hasta 4 Con Paso 1 Hacer
			Segun i Hacer
				0:
					Escribir "Nombre: " personas[dnipersona,i]
				1:
					Escribir "Apellido: " personas[dnipersona,i]
					
				2:
					Escribir "DNI: " personas[dnipersona,i]
				3:
					Escribir  "Tel�fono: " personas[dnipersona,i]
				De Otro Modo:
					Escribir "Edad: "  personas[dnipersona,i] 
			Fin Segun
			
		FinPara
	FinSi
	
FinSubProceso
SubProceso CargaDatos(personas)
    personas[0,0] = "Ana";
    personas[1,0] = "Camila";
    personas[2,0] = "Bruno";
    personas[3,0] = "Dardo";
    personas[4,0] = "Ernestina";
    personas[5,0] = "Fausto";
    personas[6,0] = "Jasmin";
    personas[7,0] = "Leonardo";
	
    personas[0,1] = "Martinez";
    personas[1,1] = "Noe";
    personas[2,1] = "Noe";
    personas[3,1] = "Pistilli";
    personas[4,1] = "Quesada";
    personas[5,1] = "Ramirez";
    personas[6,1] = "Sosa";
    personas[7,1] = "Tolosa";
	
    personas[0,2] = "17123456";
    personas[1,2] = "25789101";
    personas[2,2] = "39121314";
    personas[3,2] = "21151617";
    personas[4,2] = "33181920";
    personas[5,2] = "15212223";
    personas[6,2] = "40242526";
    personas[7,2] = "11272829";
	
    personas[0,3] = "+541141200011";
    personas[1,3] = "+543419485831";
    personas[2,3] = "+541145565789";
    personas[3,3] = "+541158637543";
    personas[4,3] = "+541158637543";
    personas[5,3] = "+543423444567";
    personas[6,3] = "+543402512345";
    personas[7,3] = "+541151234567";
	
    personas[0,4] = "56";
    personas[1,4] = "45";
    personas[2,4] = "26";
    personas[3,4] = "48";
    personas[4,4] = "35";
    personas[5,4] = "60";
    personas[6,4] = "25";
    personas[7,4] = "70";
FinSubProceso

