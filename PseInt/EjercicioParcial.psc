Proceso parcial
	
	definir monto, producto, total, cantidad, resultado Como Entero
	
	repetir
		producto=0
		Escribir "Ingresar valor del Producto: (0 para finalizar la carga)"
		leer monto
		
			si (monto<0) Entonces
					Repetir
							Escribir "el valor del producto no pueder ser negativo, vuelve a intentarlo"
							Escribir "Ingresar valor del Producto: (0 para finalizar la carga)"
							leer monto
					Hasta Que (monto>=0)
				
			FinSi
				
			si (monto<>0) Entonces
				
				Escribir "Ingresa la cantidad:"
				leer cantidad
				
				si (cantidad<=0)
						Repetir
							Escribir "La cantidad tiene que ser mayor a 0, vuelve a intentarlo"
							Escribir "Ingresa la cantidad:"
							leer cantidad
						Hasta Que (cantidad>0)
				FinSi
				
				producto=monto*cantidad
				
				total=total+producto
				
			FinSi
		
		Hasta Que (monto=0)
	
	Escribir "Total a pagar es : $", total
	
	
FinProceso
