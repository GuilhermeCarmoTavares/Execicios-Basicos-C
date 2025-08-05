/ GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para exibir um vetor em ordem inversa
void exibirOrdemInversa(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];
    printf("Digite 10 valores para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    exibirOrdemInversa(vetor, 10);

    return 0;
}
