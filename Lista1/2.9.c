#include <stdio.h>

int main() {

float salario, prestacao;
printf("Digite o sal�rio e o valor da presta��o do empr�stimo: ");
scanf("%f %f", &salario, &prestacao);
if (prestacao > salario * 0.2)
printf("Empr�stimo n�o concedido\n");
else
printf("Empr�stimo concedido\n");
return 0;
}
