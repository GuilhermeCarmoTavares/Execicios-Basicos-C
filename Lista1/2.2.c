
#include <stdio.h>
#include <math.h> 

int main() {

  float numero;
  printf("Digite um numero maior que zero: ");
  scanf("%f", &numero);

   if (numero >= 0)
    
	printf("A raiz quadrada de %.2f �: %.2f\n", numero, sqrt(numero));
     
	 else
       
	   printf("N�mero invalido!\n");
return 0;
}
