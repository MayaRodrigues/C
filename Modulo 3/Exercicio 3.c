#include <stdio.h>
#include <math.h>


int main() {

   int num=0;
   int resultado=0;

    printf("Digite um numero inteiro para ser  ao quadrado:\n");
    scanf("%d",&num);

    resultado= pow(num,2);

    printf("o resultado é :%d", resultado);

    return 0;
}
