//GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para calcular a soma dos elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;
    for (i = 0; i < n; i++) {
        soma += v[i]; // Soma o valor de cada elemento ao total
    }
    return soma; // Retorna a soma total
}

int main() {
    int vetor[5], i, resultado;

    // Preenche o vetor com valores (cada elemento é o dobro de seu índice)
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }

    // Calcula a soma dos elementos do vetor chamando a função
    resultado = calcularResultado(vetor, 5);

    // Imprime o resultado
    printf("O resultado é: %d\n", resultado);

    return 0;
}

