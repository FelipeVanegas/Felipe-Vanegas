#include <stdio.h>

int main() {
	short enteroNumero1 = 115;
        signed int enteroNumero2 = 55;
        unsigned long enteroNumero3 = 789;
        char caracterA = 65;
        char caracterB = 'B';
        float puntoFlotanteNumero1 = 89.8;
        double puntoFlotanteNumero2 = 238.2236;
	//Funciones de salida de datos en pantalla
	printf(": %i \n", enteroNumero1);
	printf(": %f \n", enteroNumero2);
	printf(": %f \n", enteroNumero3);
	printf(": %c \n", caracterA);
	printf(": %o \n Como Hexadecimal %X \n", caracterB );
	printf("Flotante con precisión: %5.2f \n", puntoFlotanteNumero1);
	printf("Doble con precisión: %5.2f \n", puntoFlotanteNumero2);
return 0;
}
// c - para imprimir un carácter
//d - para imprimir un número entero con signo
//e - para imprimir un número en notación científica (con exponente)
//f - para imprimir un número decimal normal (sin exponente)
//g - para imprimir un número flotante usando e o f, el que convenga
//i - igual que %d, imprime un entero con signo
//o - para imprimir un número en formato octal
//s - para imprimir una cadena de texto
//u - para imprimir un entero sin signo
//x - para imprimir un número en hexadecimal (letras minúsculas)
