#include <stdio.h>

int main() {
  int n, i;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int vetor[n];

  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Elementos do vetor:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");

  return 0;
}
