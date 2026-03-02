#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Objetivo:
// Nível Novato: movimentação com loops
// Nível Aventureiro: cavalo com loops aninhados
// Nível Mestre: usar recursão + loops avançados

// ================================
// Funções recursivas (Mestre)
// ================================

// Bispo recursivo (diagonal: cima + direita)
void moverBispo(int casas) {
    if (casas == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispo(casas - 1);
}

// Torre recursiva (direita)
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha recursiva (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {

    // ================================
    // Nível Novato - Movimentação
    // ================================

    const int BISPO_CASAS = 5;
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 8;

    printf("\n=== MOVIMENTACAO (LOOPS - NOVATO) ===\n");

    // Bispo (diagonal superior direita)
    printf("\nBispo:\n");
    for (int i = 0; i < BISPO_CASAS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre (direita)
    printf("\nTorre:\n");
    int t = 0;
    while (t < TORRE_CASAS) {
        printf("Direita\n");
        t++;
    }

    // Rainha (esquerda)
    printf("\nRainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < RAINHA_CASAS);


    // ================================
    // Nível Aventureiro - Cavalo
    // ================================

    printf("\n=== MOVIMENTACAO CAVALO (ANINHADO) ===\n");

    // Cavalo: L (baixo + esquerda)
    for (int i = 0; i < 2; i++) { // vertical
        for (int j = 0; j < 1; j++) { // horizontal
            if (i < 2) printf("Baixo\n");
            if (j < 1) printf("Esquerda\n");
        }
    }


    // ================================
    // Nível Mestre - Recursão
    // ================================

    printf("\n=== MOVIMENTACAO (RECURSIVO - MESTRE) ===\n");

    printf("\nBispo:\n");
    moverBispo(BISPO_CASAS);

    printf("\nTorre:\n");
    moverTorre(TORRE_CASAS);

    printf("\nRainha:\n");
    moverRainha(RAINHA_CASAS);


    // ================================
    // Cavalo avançado (Mestre)
    // ================================

    printf("\n=== CAVALO AVANCADO ===\n");

    // Movimento em L (cima + direita)
    for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {

        if (i >= 2) continue;

        printf("Cima\n");

        if (i == 1) {
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
