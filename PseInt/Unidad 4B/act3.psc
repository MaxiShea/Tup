// Al programa del ejercicio anterior modificarle la funcionalidad que muestra la lista de personas
// ordenadas por apellido, además debe estar ordenado por apellido+nombre

Proceso principal
	
    Definir i, opc Como entero
	Definir personas, dni, buscar Como Caracter
	
	
    dimension personas[8,5]
	CargaDatos(personas)
	repetir
		Escribir "1. Busqueda de DNI"
		Escribir "2. Ordenar Por Nombre y apellido"
		Escribir "0. Salir"
	
		leer opc
		
		Segun opc hacer
			1: busquedadni(dni,personas)
			2: ordenarpersonas(personas)
				mostrararray(personas)
			0:
			De Otro Modo:
				escribir "Error,vuelve a intentarlo"
		FinSegun
	hasta Que opc=0
	
	
	
FinProceso

SubProceso ordenarpersonas(personas) 
	
	definir i,j, pos_menor Como Entero
	Definir aux Como Caracter
	definir apenombre1, apenombre2 Como Caracter
	para i=0 hasta 6 con paso 1 Hacer
		pos_menor=i
		para j=i+1 hasta 7 con paso 1 Hacer
			
			apenombre1 = Concatenar(personas[j,1], personas[j,0])
			
			apenombre2 = Concatenar(personas[pos_menor,1], personas[pos_menor,0])
			si apenombre1<apenombre2 Entonces
				pos_menor=j
				
			FinSi
		FinPara
		para j=0 hasta 4 con paso 1 Hacer
			aux=personas[i,j]
			personas[i,j]=personas[pos_menor,j]
			personas[pos_menor,j]=aux
			
		FinPara
		
		
	FinPara
	
FinSubProceso
SubProceso mostrararray(personas)
	definir i,j Como Entero
	
	Escribir ""
	Escribir "-------------------------------------------"
	Escribir "Lista Ordenada por Nombre y Apellido:"
	
	
	para i=0 hasta 7 con paso 1 Hacer
		
		para j=0 hasta 4 con paso 1 hacer
			Escribir Sin Saltar personas[i,j] " "
			
		FinPara
		Escribir ""
		
	FinPara
	Escribir "-------------------------------------------"
	
FinSubProceso
SubProceso busquedadni(dni, personas) 
	definir dniEncontrado Como Logico
	definir dnipersona Como Entero
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
					Escribir  "Teléfono: " personas[dnipersona,i]
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

