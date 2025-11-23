//Porgrama_6.c
//Felipe Vanegas
// 23 de octubre del 2025
// Operadores aritméticos

#include <stdio.h>
int main()
{
	short ocho, cinco, cuatro, tres, dos, uno;
	ocho = 8;
	cinco = 5;
	cuatro = 4;
	tres = 3;
	dos = 2;
	uno = 1;
	printf("Operadores aritméticos\n");
	printf("5 modulo 2 = %d\n",cinco%dos);
	printf("Operadores lógicos\n");
	printf("8 >> 2 = %d\n",ocho>>dos);
	printf("8 << 1 = %d\n",ocho<<1);
	printf("5 & 4 = %d\n",cinco&cuatro);
	printf("3 | 2 = %d\n",tres|dos);
	printf("\n");
	return 0;
}
// en este código se muestran ejemplos de cómo manipular números usando operaciones a nivel de bits se usan desplazamientos a la izquierda y derecha para mover los bits y cambiar el valor del número tambien se usan los operadores AND y OR para combinar bits entre sí y ver cómo cambian los resultados en general y el programa sirve para entender cómo funcionan los bits dentro de los números y como se pueden modificar directamente
