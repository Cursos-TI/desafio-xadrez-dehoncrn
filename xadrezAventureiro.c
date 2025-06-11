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
        printf("Torre moveu %d casa(s) para a direita.\n", i);
        i++;
    }

    printf("\n");

    // Implementação de Movimentação do Bispo usando do-while
    int j = 1;
    do {
        printf("Bispo moveu %d casa(s) em diagonal.\n", j);
        j++;
    } while (j <= bispoCasas);

    printf("\n");

    // Implementação de Movimentação da Rainha
    for (int i = 1; i <= rainhaCasas; i++) {
        printf("Rainha moveu %d casa(s) para a esquerda.\n", i);
    }

    printf("\n");

    // Implementação de Movimentação do Cavalo
    int m = 1;
    for (int k = 1; k <= 2; k++) {
        printf("Cavalo moveu %d casa(s) para baixo.\n", k);
        while (m <= 1) {
            printf("Cavalo moveu %d casa(s) para a esquerda.\n", m);
            m++;
        }
    }

    printf("\n");

    return 0;
}