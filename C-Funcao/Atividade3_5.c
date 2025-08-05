// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para exibir números ímpares até um número, excluindo múltiplos de 7
void exibirImpares(int numero) {
    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    exibirImpares(numero);

    return 0;
}

