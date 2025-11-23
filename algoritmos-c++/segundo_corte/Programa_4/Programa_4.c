//Porgrama_4.c
//Felipe Vanegas
// 21 de octubre del 2025
// Secuencia de caracteres

#include <stdio.h>

int main()
{
	int entero;
	float flotante;

	printf("Ingresa el valor entero: ");
	scanf("%i", &entero);
	printf("El valor ingresado es: %d\0", entero);

	printf("Ingresa el valor float: ");
	scanf("%f", &flotante);
	printf("El valor ingresado es: %f\0", flotante);

	return 0;
}
// "/a" Hace sonar una alarma
// "/b" borra el ultimo caracter que escribi
// "/f" salta al siguiente
// "/n" salta a la sigueinte linea
// "\r" - vuelve al inicio de la línea
// "\t" - agrega una tabulación
// "\v" - salto vertical
// "\0" - marca el final de una cadena