// GUILHERME CARMO TAVARES
#include <stdio.h>

// Função para retornar o menor de três números
int menorNumero(int num1, int num2, int num3) {
    int menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    return menor;
}

int main() {
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Menor número: %d\n", menorNumero(num1, num2, num3));

    return 0;
}

