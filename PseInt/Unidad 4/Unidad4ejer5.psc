Proceso sin_titulo
	Definir marcas, promedio, i, suma, menorpromedio, mayorpromedio Como Real
	suma <-0
	menorpromedio <-0
	mayorpromedio <-0
	Dimension marcas[10]
	
	Para i<-0 hasta 9 con paso 1 Hacer
		Escribir "Ingrese la marca obtenida: ", i+1
		Leer marcas[i]
		suma<- suma + marcas[i]
	FinPara
	promedio <- suma / 10
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si marcas[i] < promedio Entonces
			menorpromedio <- menorpromedio +1
		SiNo
			mayorpromedio <-mayorpromedio +1
			si marcas[i] > promedio
				Entonces
				mayorpromedio = menorpromedio + 1
			FinSi
		Fin Si
	Fin Para
	
	Escribir "El promedio es: ", promedio
	Escribir "Menor promedio: " menorpromedio
	Escribir "Mayor promedio: " mayorpromedio
FinProceso
