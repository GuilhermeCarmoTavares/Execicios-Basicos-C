//GUILHERME CARMO TAVARES

#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 5 * i * i + 2 * i + 8;
    }
    return soma;
}

int main() {
    int n;
    
   
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
  
    int resultado = somatorio(n);
    printf("O resultado da soma para n=%d é %d\n", n, resultado);
    
    return 0;
}
