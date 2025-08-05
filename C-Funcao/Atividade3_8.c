// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para exibir números pares até um número
void exibirPares(int numero) {
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    exibirPares(numero);

    return 0;
}
