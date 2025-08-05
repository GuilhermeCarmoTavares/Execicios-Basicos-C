// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para calcular o resultado com base na soma, no primeiro e no último valor do vetor
int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    return soma + (primeiroValor * 5) + (ultimoValor * 2);
}

int main() {
    int vetor[10], soma = 0;

    // Preenche o vetor e calcula a soma
    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1;
        soma += vetor[i];
    }

    int resultado = calcularResultado(soma, vetor[0], vetor[9]);
    printf("Resultado: %d\n", resultado);

    return 0;
}

