#include <stdio.h>
#define I2S(x) ((short *) x)

int main() {
    int i, x[10];

    for(i=0; i<10; i++) {
        x[i] = i;
    }

    // ¿Por qué se imprimen alternados con 0 los numeros asignados en el for anterior?
    // Respuesta: Tiene que ver con la función ya que la función es una macro y una función recursiva,
    // manda a llamar a la misa función dentro del print y también por los valores de bytes dentro del short

    for(i=0; i<10; i++) {
        printf("%d\n", *I2S(x+i));
    }
    // En eset for I2S es un apuntador que paso por la función x+i
    // en la funcion definida como (short *) x) es donde se intercalan los número
    // hasta conmpletar todas las seceuncias (10).
}
