#include <stdio.h>

void torre(int casas) {
    if (casas > 0) {
        printf("Torre se moveu para a direita.\n");
        torre(casas - 1);
    }
}

void bispo(int verticais, int horizontais) {
    if (verticais > 0) {
        printf("Baixo\n");
        bispo(verticais - 1, horizontais);
    } else {
        printf("Movimento horizontal: \n");
        int i = 0;
        while (i < horizontais) {
            printf("Esquerda \n");
            i++;
        }
        printf("\n");
    }
}

void rainha(int casas) {
    if (casas > 0) {
        printf("Rainha se moveu para a esquerda.\n");
        rainha(casas - 1);
    }
}

void cavalo(int verticais, int horizontais) {
    if (verticais > 0) {
        printf("Cavalo se moveu para cima.\n");
        cavalo(verticais - 1, horizontais);
    } else {
        int i = 0;
        while (i < horizontais) {
            if (i > 0) {
                // Só existe uma casa para a direita, então interrompe o loop após o primeiro movimento
                break;
            }
            printf("Cavalo se moveu para a direita.\n");
            i++;
            continue;
        }
    }
}

int main() {
    
    // Definindo valores para o número de casas que cada peça pode se mover
    int torreCasas = 5;
    int rainhaCasas = 8;
    int bispoVert = 3;
    int bispoHor = 3;
    int cavaloVert = 2;
    int cavaloHor = 1;

    // Movimentação da Torre usando recursividade
    torre(torreCasas);
    printf("\n");

    // Movimentação do Bispo usando recursividade
    printf("O bispo se moveu assim: \n");
    printf("Movimento vertical: \n");
    bispo(bispoVert, bispoHor); // 3 para baixo, 3 para a esquerda
    //printf(")\n");

    // Movimentação da Rainha usando recursividade
    rainha(rainhaCasas);
    printf("\n");

    // Movimentação do Cavalo usando loops aninhados
    cavalo(cavaloVert, cavaloHor); // 2 para cima, 1 para a direita
    printf(")\n");

    return 0;
}