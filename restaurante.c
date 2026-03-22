#include <stdio.h>
int main() {
    int opcao;
    printf("Escolha o tipo de cliente:\n");
    printf("1 - Casal\n");
    printf("2 - Familia com criancas\n");
    printf("3 - Grupo sem criancas\n");
    printf("Digite um numero: ");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            printf("Direcionar para a area de casais.\n");
            break;
        case 2:
            printf("Direcionar para a area de familias com criancas.\n");
            break;
        case 3:
            printf("Direcionar para a area de grupos sem criancas.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
    return 0;
}