#include <stdio.h>

#include "hola.h"

int sumar(int a, int b) {
    return a + b;
}

int main(void) {
    printf("%s\n", MENSAJE);

    printf("%d\n", sumar(5, 6));

    return 0;
}
