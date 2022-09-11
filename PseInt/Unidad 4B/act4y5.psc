// Al programa del ejercicio anterior agregarle una nueva funcionalidad, para que el usuario
// pueda decidir si quiere ver la lista de todos los pacientes ordenada por edad o por
// apellido+nombre. Debe llamarse a un procedimiento que reciba un arreglo y un tipo de
// ordenamiento como parámetro, ejemplo ShowPatients(patients, order_type) y order_type
// puede contener tener los valores "by_name" o "by_age.

Proceso principal
	
    Definir i, opc,opc2 Como entero
	Definir personas, dni, buscar, apellido, nombre Como Caracter
    dimension personas[8,5]
	CargaDatos(personas)
	repetir
		Escribir "1. Busqueda de DNI"
		Escribir "2. Ordenar Lista"
		Escribir "3. Encontrar persona"
		Escribir "4. Mostrar personas"
		Escribir "0. Salir"
		leer opc
		Segun opc hacer
			1: busquedadni(dni,personas)
			2: 	escribir"Como desea ordenar la Lista"
				escribir"1.Apellido y nombre"
				escribir"2.Edad"
				leer opc2
				si opc2=1 Entonces
					ordenarpersonasnombre(personas)
					mostrararray(personas)
				sino 
					ordenarpersonasedad(personas)
					mostrararray(personas)
				FinSi
				
			3: 
				ordenarpersonasnombre(personas)
				Escribir "Ingresar Apellido "
				leer apellido
				Escribir "Ingresar Nombre"
				leer nombre
				buscar=Concatenar(apellido,nombre)
				buscarpersona(personas,buscar)
			De Otro Modo:
				mostrararray(personas)
				
		FinSegun
	hasta Que opc=0
	
FinProceso
SubProceso buscarpersona(personas,buscar)
	definir i, centro, inferior, superior Como Entero
	definir apenombre1, apenombre2 Como Caracter
	definir encontrado Como Logico
	
	
	encontrado=Falso
	para i=0 hasta 7 Hacer
		inferior=0
		superior=7
		
		Repetir
			centro=trunc((inferior+superior)/2)
			apenombre1 = Concatenar(personas[i,1],personas[i,0])
			si apenombre1=buscar
				Escribir "La persona fue encontrado en la posicion: ", i+1
				encontrado=Verdadero
				
			SiNo
				si apenombre1<buscar
					inferior=centro+1
				SiNo
					superior=centro-1
				FinSi
			FinSi
			
			Mientras  que !encontrado y inferior<= superior 
				
				
			FinPara
			si encontrado=falso Entonces
				escribir "Lo siento, nombre no encontrado"
			FinSi
			
FinSubProceso
SubProceso ordenarpersonasedad(personas) 
	
	definir i,j, pos_menor Como Entero
	Definir aux Como Caracter
	definir apenombre1, apenombre2 Como Caracter
	para i=0 hasta 6 con paso 1 Hacer
		pos_menor=i
		para j=i+1 hasta 7 con paso 1 Hacer
			
			
			si personas[j,4]<personas[pos_menor,4] Entonces
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
SubProceso ordenarpersonasnombre(personas) 
	
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
	para i=0 hasta 7 con paso 1 Hacer
		para j=0 hasta 4 con paso 1 hacer
			Escribir Sin Saltar personas[i,j] " "
			
		FinPara
		Escribir ""
		
	FinPara
FinSubProceso
SubProceso busquedadni(dni, personas) 
	definir dniEncontrado Como Logico
	definir dnipersona Como Entero
	dniEncontrado=Falso
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
