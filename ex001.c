#include <stdio.h>

int isPrimo(int num) {
    if (num < 2) 
    return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
        return 0;
    }
    return 1;
}

int main() {
    int contador = 0;
    int numero = 1;
    while (contador < 100) {
        numero++;
        if (isPrimo(numero)) {
            contador++;
        }
    }

    printf("O 100º número primo é: %d\n", numero);
    return 0;
}
