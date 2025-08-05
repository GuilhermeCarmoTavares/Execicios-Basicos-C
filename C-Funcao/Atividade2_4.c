//GUILHERME CARMO TAVARES
#include <stdio.h>


int somatorio(int n);

int main() {
    int n, resultado;
    

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    

    resultado = somatorio(n);
    
      printf("O resultado do somatório é: %d\n", resultado);
    
    return 0;
}


int somatorio(int n) {
    int soma = 0;
    
    for (int i = 1; i <= n; i++) {
        soma += (5 * i * i + 2 * i + 8);
    }
    
    return soma;
}
