Proceso sin_titulo
	definir  i, j, num Como Entero
	Definir opc Como Caracter
	Dimension opc[3,4]
	
	para i=0 hasta 2 con paso 1
		para j=0 hasta 3 con paso 1
			segun i hacer
				0:
					segun j hacer
						0: opc[i,j]="|  Argentina  |"
						1:opc[i,j]="Buenos Aires"
						2:opc[i,j]="Rosario"
						3:opc[i,j]="Cordoba"					
					FinSegun
				1:
					segun j hacer
						0: opc[i,j]="|  Colombia  |"
						1:opc[i,j]="Cali"
						2:opc[i,j]="Bogota"
						3:opc[i,j]="Santa Marta"	
					FinSegun
					
				2:
					segun j hacer
						0: opc[i,j]="|  Brasil  |"
						1:opc[i,j]="Brasilia"
						2:opc[i,j]="Rio de Janeiro"
						3:opc[i,j]="San Pablo"	
					FinSegun
					
			FinSegun
			
		FinPara
		
	FinPara
	para i=0 hasta 2 Con Paso 1
		para j=0 hasta 3 Con Paso 1
			Escribir Sin Saltar"  " opc[i,j]  
			
		FinPara
		Escribir ""
		
		
	FinPara
	
	
FinProceso