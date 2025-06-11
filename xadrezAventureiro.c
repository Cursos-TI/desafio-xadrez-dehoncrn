#include<stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    int torreCasas = 5;
    int bispoCasas = 5;
    int rainhaCasas = 8;
    
    // Implementação de Movimentação da Torre usando while
    int i = 1;
    while (i <= torreCasas) {
        printf("Torre se moveu para a direita.\n");
        i++;
    }

    printf("\n");

    // Implementação de Movimentação do Bispo usando do-while
    int j = 1;
    do {
        printf("Bispo se moveu em diagonal.\n");
        j++;
    } while (j <= bispoCasas);

    printf("\n");

    // Implementação de Movimentação da Rainha
    for (int i = 1; i <= rainhaCasas; i++) {
        printf("Rainha se moveu para a esquerda.\n");
    }

    printf("\n");

    printf("(O cavalo se moveu assim: ");

    // Implementação de Movimentação do Cavalo
    for (int i = 1; i <= 2; i++) { // O cavalo se move duas vezes para baixo
        printf("Baixo ");
        if (i == 2) { // Se for a segunda iteração, o cavalo se move para a esquerda
            int k = 1;
            while (k <= 1) {
                printf("Esquerda");
                k++;
            }
        }
    }

    printf(")");

    printf("\n");

    return 0;
}