Algoritmo ECUACION_CUADRATICA
	Definir a, b, c, discriminante, raiz1, raiz2, parte_real, parte_imaginaria Como Real
	Escribir 'Introduce el valor de a:'
	Leer a
	Escribir 'Introduce el valor de b:'
	Leer b
	Escribir 'Introduce el valor de c:'
	Leer c
	discriminante <- b^2-4*a*c
	Si discriminante>0 Entonces
		raiz1 <- (-b+Raiz(discriminante))/(2*a)
		raiz2 <- (-b-Raiz(discriminante))/(2*a)
		Escribir 'Las soluciones son: ', raiz1, ' y ', raiz2
	SiNo
		Si discriminante=0 Entonces
			raiz1 <- -b/(2*a)
			Escribir 'La solución es: ', raiz1
		SiNo
			parte_real <- -b/(2*a)
			parte_imaginaria <- Raiz(-discriminante)/(2*a)
			Escribir 'Las soluciones son imaginarias: ', parte_real, ' + ', parte_imaginaria, 'i y ', parte_real, ' - ', parte_imaginaria, 'i'
		FinSi
	FinSi
FinAlgoritmo
