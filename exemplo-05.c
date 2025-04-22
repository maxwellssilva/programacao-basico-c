#include <stdio.h>

int main() {
    
    int escolha;
    printf("Escolha seu produto: 1 para agua, 2 para refrigerante, 3 para suco\n");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
        printf("Você escolheu água");
        break;
    case 2:
        printf("Você escolheu refrigerante!");
        break;
    case 3:
        printf("Você escolheu suco!");
        break;
    default:
        printf("Opção inválida, escolha uma opção válida.");
        break;
    }

}