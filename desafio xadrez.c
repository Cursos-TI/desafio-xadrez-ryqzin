#include <stdio.h>

#include <stdio.h>

// Função recursiva para a Torre (direita)
void moverTorre(int atual, int max) {
    if (atual > max) return;
    printf("Casa %d: Direita\n", atual);
    moverTorre(atual + 1, max);
}

// Função recursiva para a Rainha (esquerda)
void moverRainha(int atual, int max) {
    if (atual > max) return;
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(atual + 1, max);
}

// Função recursiva para o Bispo (diagonal para cima e à direita)
void moverBispoRec(int atual, int max) {
    if (atual > max) return;
    printf("Casa %d: Cima, Direita\n", atual);
    moverBispoRec(atual + 1, max);
}

// Bispo com loops aninhados (vertical e horizontal)
void moverBispoLoops(int casas) {
    int passo = 1;
    for (int i = 1; i <= casas; i++) { // vertical (cima)
        for (int j = 1; j <= 1; j++) { // horizontal (direita, só 1 vez por passo)
            printf("Casa %d: Cima, Direita\n", passo++);
        }
    }
}

int main() {
    // Torre: recursivo
    printf("Movimento da Torre:\n");
    moverTorre(1, 5);

    // Bispo: recursivo
    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRec(1, 5);

    // Bispo: loops aninhados
    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoLoops(5);

    // Rainha: recursivo
    printf("\nMovimento da Rainha:\n");
    moverRainha(1, 8);

    // Cavalo: 2 para cima e 1 para a direita, usando loops aninhados e controle de fluxo
    printf("\nMovimento do Cavalo:\n");
    int movimentos = 3; // Quantas vezes o cavalo vai repetir o movimento
    int passo = 1;
    for (int i = 0; i < movimentos; i++) {
        int sub = 0;
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Casa %d: Cima\n", passo++);
                continue; // Vai para o próximo j
            }
            if (j == 2) {
                printf("Casa %d: Direita\n", passo++);
                break; // Sai do loop interno após o movimento para a direita
            }
        }
    }

    return 0;
}
