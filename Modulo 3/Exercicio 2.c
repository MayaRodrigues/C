#include <stdio.h>

int main() {
  
   int num1;
   int num2;
   int num3;
   int resultado;

   printf("Digite o primeiro numero inteiro:\n");
   scanf("%d",&num1);
   printf("Digite o segundo numero inteiro:\n");
   scanf("%d",&num2);
   printf("Digite o terceiro numero inteiro:\n");
   scanf("%d",&num3);

   resultado = num1 + num2 + num3;

   printf("O resultado da soma dos tres numeros inteiros é %d", resultado);

    return 0;
}
