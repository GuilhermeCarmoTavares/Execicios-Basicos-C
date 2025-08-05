#include <stdio.h>

int main() {
    int n;

    // Entrada do tamanho da matriz
    printf("Digite o tamanho da matriz (n): ");
    scanf("%d", &n);

    int matriz[n][n];

    // Construção da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                matriz[i][j] = j + 1; // Abaixo da diagonal
            } else if (j == i) {
                matriz[i][j] = i + 1; // Diagonal principal
            } else {
                matriz[i][j] = 0; // Acima da diagonal
            }
        }
    }

    // Exibição da matriz
    printf("\nMatriz Gerada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
