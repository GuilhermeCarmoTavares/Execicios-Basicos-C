
#include <stdio.h>

int main() {
	
int num1, num2;


printf("Digite dois n�meros inteiros separados por espa�o: ");
scanf("%d %d", &num1, &num2);


if (num1 > num2)

 printf("%d � maior que %d\n", num1, num2);

 else if (num2 > num1)
  printf("%d � maior que %d\n", num2, num1);

  else
   printf("Os n�meros s�o iguais\n");
   
return 0;
}
