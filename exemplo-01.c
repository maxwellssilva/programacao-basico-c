#include <stdio.h>

const float PI = 3.14;

int main() {
    int raio = 5;
    float area;

    printf("Olá, bem-vindo ao programa de cálculo de área\n");

    area = PI * raio * raio;

    printf("A área do círculo com raio %d é %.2f\n", raio, area);

    return 0;
}