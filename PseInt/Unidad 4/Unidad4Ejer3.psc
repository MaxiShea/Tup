Proceso sin_titulo
	Definir i, num,acum Como Entero
	acum<-0
	Dimension num[5]
	
	para i<-0 hasta 4 Con Paso 1 Hacer
		Escribir "Ingresa un numero ", i+1
		Leer num[i]
		acum<-acum+num[i]
	FinPara
	
	Escribir "La suma es: ", acum
	
	
	
FinProceso
