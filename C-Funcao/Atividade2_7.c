//GUILHERME CARMO TAVARES

#include <stdio.h>
 
int soma (int v[]);

int main(){
    
    int vetor[3], resultado;
    
    for (int i=0; i< 3; i++){
        printf("Digite um %d numero :", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    resultado = soma (vetor);
     printf("A soma dos valores do vetor é: %d\n", resultado);
}
    
    int soma(int v[]){
       int soma= 0,i;
       
       for(i=0;i<3;i++){
           soma+=v[i];
           
       }
         return soma;
    }
