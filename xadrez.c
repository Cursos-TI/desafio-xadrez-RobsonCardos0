#include <stdio.h>

int main() {
    // Número de casas a serem percorridas por cada peça
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // ========================
    // Movimento da TORRE (for)
    // ========================
    // A torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // ========================
    // Movimento do BISPO (while)
    // ========================
    // O bispo se move 5 casas na diagonal: cima e direita
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ========================
    // Movimento da RAINHA (do-while)
    // ========================
    // A rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    return 0;
}
