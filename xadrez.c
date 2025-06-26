#include <stdio.h>

int main() {
    int movimentosCavalo = 3; // Número de movimentos em L do cavalo

    printf("Movimento do Cavalo:\n");

    // Loop externo: controla o número de movimentos em L
    for (int i = 0; i < movimentosCavalo; i++) {
        // Loop interno: faz as 2 casas para baixo
        int passosBaixo = 0;
        do {
            printf("Baixo\n");
            passosBaixo++;
        } while (passosBaixo < 2);

        // Após mover 2 casas para baixo, move 1 casa para esquerda
        printf("Esquerda\n");

        printf("---\n"); // Separador para visualizar cada movimento completo em L
    }

    return 0;
}
