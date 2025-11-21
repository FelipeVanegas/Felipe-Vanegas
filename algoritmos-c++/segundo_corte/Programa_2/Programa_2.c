//Porgrama_2.c
//Felipe Vanegas
// 17 de octubre del 2025
// asignaciòn de variable de datos

#include <stdio.h>
int main() {//se refiere a cantidades enteras
	short enteroNumero1 = 115;//almacena números enteros pequeños
	signed int enteroNumero2 = 55;//almacena números mas grandes y ademas permite números positivos y negativos (+, -)
	unsigned long enteroNumero3 = 789;//enteros muy grandes pero solo positivos (+)
	char caracterA = 65; //char prmite almacenar cantidades enteras, aunque almacena cantidades pequeñas como en este caso "65"
	char caracterB = 'B';
	float puntoFlotanteNumero1 = 89.8;//perimte numeros con decimales, aunque pemite pocos decimales (pocos números despues de la ",")
	double puntoFlotanteNumero2 = 238.2236;//al igual que float pemite decimales, aunque este pemite una cantidad más grande
	printf("Las variables son", enteroNumero1, enteroNumero2, enteroNumero3)
return 0;
}
