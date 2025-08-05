// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para somar valores de um vetor
int somarValores(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
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

    int soma = somarValores(vetor, tamanho);
    float media = (float)soma / tamanho;

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}
