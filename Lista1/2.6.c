#include <stdio.h>

 int main() {
 
int num1=0, num2=0, diferenca=0;

printf("Digite dois numeros inteiros separados por espaco: ");
scanf("%d %d", &num1, &num2);
if (num1 > num2){
diferenca = num1 - num2;
printf("O maior numero �: %d, e a diferenca �: %d\n", num1, diferenca);
}
else if (num2 > num1){
diferenca = num2 - num1;
printf("O maior numero �: %d, e a diferenca �: %d\n", num2, diferenca);
}
else
printf("Os n�meros s�o iguais\n");
return 0;
}
