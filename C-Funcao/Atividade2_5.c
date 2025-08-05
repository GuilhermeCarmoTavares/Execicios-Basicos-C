
//GUILHERME CARMO TAVARES




#include <stdio.h>


int calcularesultado (int n1, int n2);

int main()
{
    int v1, v2, conta;
    
    printf("Digite o primeiro numero inteiro:\n ");
    scanf("%d", &v1);
     printf("Digite o segundo  numero inteiro:\n ");
    scanf("%d", &v2);
    
    conta = calcularesultado (v1,v2);
    printf("A soma dos dois numeros é: %d", conta);

    return 0;
}

int calcularesultado (int n1, int n2){
    
    int resultado;
    resultado= n1+n2;
    return(resultado);
}

