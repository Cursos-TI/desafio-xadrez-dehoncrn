#include<stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    const int torreCasas = 5;
    const int bispoCasas = 5;
    const int rainhaCasas = 8;
    
    // Implementação de Movimentação da Torre usando while
    int i = 1;
    while (i <= torreCasas) {
        printf("Torre moveu %d casa(s) para a direita.\n", i);
        i++;
    }

    // Implementação de Movimentação do Bispo usando do-while
    int j = 1;
    do {
        printf("Bispo moveu %d casa(s) em diagonal.\n", j);
        j++;
    } while (j <= bispoCasas);


    // Implementação de Movimentação da Rainha
    for (int i = 1; i <= rainhaCasas; i++) {
        printf("Rainha moveu %d casa(s) para a esquerda.\n", i);
    }

    return 0;
}