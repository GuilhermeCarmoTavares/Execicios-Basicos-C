#include <stdio.h>

int main(void){
	int tamanho= 5;
	int numeros[tamanho];
	int i,maior= 0,menor=101;
	
	
	for (i=0;i<tamanho;i++){
		printf("Digite o n�mero: %d\n", i+1);
		scanf("%d", &numeros[i]);
		
		if(numeros[i]>maior)
		maior = numeros[i];
		
		if(numeros[i]<menor)
		menor=numeros[i];
		
	}
		
	printf("O maior � %d e o menor �: %d", maior, menor );
	
	return 0;
	
}
