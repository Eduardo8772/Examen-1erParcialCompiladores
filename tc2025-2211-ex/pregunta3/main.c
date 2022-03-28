#include <stdio.h>
#include "rot13.h"

// 1. Proporciona los comandos para compilar un ejecutable usando la librería estática.
// Paso 1: Abrir lista de archivos con ls para ver si esta nuestra librería
// Paso 2: Compilar gcc -o main main.c (dara error pues no estamo cargando el directoria de la librería)
// Paso 3: carga librería comando: gcc -o main main.c -L. -lrot13
// Paso 4: Ejecutar ./main
int main() {
	char p[] = "Hola Mundo Este String Se Codifica Y Decodifica";

	rot13(p);
	printf("%s\n", p);
	rot13(p);
	printf("%s\n", p);
	
}
