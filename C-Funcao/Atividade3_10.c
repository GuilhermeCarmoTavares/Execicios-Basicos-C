// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para exibir o maior número ou se são iguais
void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("Maior número: %d\n", num1);
    } else if (num2 > num1) {
        printf("Maior número: %d\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    maiorNumero(num1, num2);

    return 0;
}

