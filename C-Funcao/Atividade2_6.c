//GUILHERME CARMO TAVARES

#include <stdio.h>

int maior (int num1, int num2);
    
int main()
{
    int n1, n2, verifica;
    
    printf("Digite o primeiro numero inteiro:\n ");
    scanf("%d", &n1);
     printf("Digite o segundo  numero inteiro:\n ");
    scanf("%d", &n2);
        
        verifica = maior(n1,n2);
        
   
    return (verifica);
}
    
    int maior(int num1, int num2){
        
        if(num1>num2){
            printf("O numero: %d é o maior", num1);
        }
        else{
            printf("O numero: %d é o maior", num2);
        }
        
    }
