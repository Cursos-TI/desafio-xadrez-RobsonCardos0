#include <stdio.h>

// === Função Recursiva: Torre (5 casas para a Direita) ===
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// === Função Recursiva: Rainha (8 casas para a Esquerda) ===
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// === Função Recursiva + Loops Aninhados: Bispo (5 casas Cima Direita) ===
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    // Loop aninhado apenas para simular movimentação composta
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

// === Cavalo: 1 vez em L para cima e à direita (2 casas cima, 1 direita) ===
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int vertical = 0;
    int horizontal = 0;

    // Laço com múltiplas variáveis e condições
    for (vertical = 0, horizontal = 0; vertical <= 2 || horizontal < 1; vertical++) {

        if (vertical < 2) {
            printf("Cima\n");
            continue;  // Após imprimir "Cima", volta ao loop sem checar o resto
        }

        if (horizontal == 0) {
            printf("Direita\n");
            horizontal++;
        }

        break;  // Movimento completo em L feito, sai do loop
    }
}

int main() {
    // === Torre ===
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // === Rainha ===
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // === Bispo ===
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // === Cavalo ===
    printf("\n");
    moverCavalo();

    return 0;
}
