#include <stdio.h>

int main() {
    int temperatura;

    printf("Digite a tempreatura atual: ");
    scanf("%d", &temperatura);

    if (temperatura < 0) {
        printf("Está muito frio!\n");
    } else if (temperatura >= 0 && temperatura < 20) {
        printf("Está frio\n");
    } else if (temperatura >= 20 && temperatura < 30) {
        printf("Esta agradavel\n");
    } else {
        printf("Está quente!\n");
    }

    return 0;
}