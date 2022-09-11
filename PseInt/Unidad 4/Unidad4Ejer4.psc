Proceso sin_titulo
	Definir i, num, mayor Como Entero
	Dimension num[10]
	
	para i<-0 hasta 9 Con Paso 1 Hacer
		Escribir "Ingrese un valor: ", i+1
		Leer num[i]		
	FinPara
	
	para i<-0 hasta 9 con paso 1 Hacer
		si num[i]>mayor Entonces
			mayor<-num[i]			
		FinSi
	FinPara
	Escribir "El numero mayor es: ", mayor
FinProceso
