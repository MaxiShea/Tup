Proceso sin_titulo
	Definir i, x, matriz, acum, total Como Entero
	Dimension matriz[4,3]
	
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		para x<-0 hasta 2 Con Paso 1 Hacer		
			Escribir "Ingrese el numero: "
			Leer matriz[i,x]		
			acum = matriz[i,x]
			total = total + acum
		FinPara		
		FinPara		
	Escribir " la suma de los numeros ingresado es : " total
FinProceso
