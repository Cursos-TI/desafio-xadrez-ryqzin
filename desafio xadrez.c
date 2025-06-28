#include <stdio.h>

#include <stdio.h>

int main() {
    // Torre: 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Bispo: 5 casas na diagonal para cima e à direita (while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    // Rainha: 8 casas para a esquerda (do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);



    // Cavalo: 2 para baixo e 1 para a esquerda (for + while)
    printf("\nMovimento do Cavalo:\n");
    int movimentos = 1; // Quantas vezes o cavalo vai repetir o movimento
    int passo = 1;
    for (int i = 0; i < movimentos; i++) {
        int j = 0;
        while (j < 2) { // Duas casas para baixo
            printf("Casa %d: Baixo\n", passo++);
            j++;
        }
        printf("Casa %d: Esquerda\n", passo++);
    }

    return 0;
}
