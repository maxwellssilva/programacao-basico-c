#include <stdio.h>

void incrementaContador() {
    static int contador = 0;

    contador++;

    printf("Contador: %d\n", contador);
}

int main() {
    incrementaContador();
    incrementaContador();
    incrementaContador();

    return 0;
}