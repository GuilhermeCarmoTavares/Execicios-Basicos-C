#include <stdio.h>

 int main() {

   float salarioBase, salarioReceber;
   
  printf("Digite o sal�rio base do funcion�rio: ");
  scanf("%f", &salarioBase);
  
  
  salarioReceber = salarioBase * 1.05; 
  
  printf("O sal�rio a receber �: %.2f\n", salarioReceber);
  
return 0;
}
