Algoritmo ECUACIÓN_CUADRATICA
	Definir a, b, c, discriminante, raiz1, raiz2 Como Real
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
			Escribir 'Sin solución.'
		FinSi
	FinSi
FinAlgoritmo