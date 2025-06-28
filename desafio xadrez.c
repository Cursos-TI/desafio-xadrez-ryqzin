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

    return 0;
}
