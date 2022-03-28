#include <stdio.h>
 
// 3. ¿Qué quieren decir los elementos de este arreglo?
int bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
 // Es una secuencia de bits que se compararán con 0xf

// 1. ¿Qué hace la función what?
unsigned int what(unsigned int num) {
    int i, result = 0;
    i = sizeof(int)*2;
    // El valor de i es asignado como el tamaño de un int y después se multiplica X2

    while (i--) { //Se va restando el valor de i
        result += bits[num & 0xf];
        // se asigna el valor a result más el valor de en bits e la posición
        // num con un operador lógico (&) este rivisa que tanto num como 0xf estén en ambos
        num >>= 4;
    }

// 2. ¿Cuál sería el máximo número valor que puede tomar result?
    return result; //2147483647
}
 

int main() {
    printf("%d\n", what(31));
    printf("%d\n", what(64));
    printf("%d\n", what(127));
    printf("%d\n", what(256));
    printf("%d\n", what(511));
    printf("%d\n", what(1024));
    printf("%d\n", what(2047));
    printf("%d\n", what(4096));

}