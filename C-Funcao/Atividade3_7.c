// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para encontrar o maior valor e sua posição
void encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    int posicao = 0;
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Posição: %d\n", posicao);
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    encontrarMaior(vetor, tamanho);

    return 0;
}
