#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int soma;
    
    printf("Digite um numero:\n");
    scanf("%d",&num1);
    printf("Digite um numero:\n");
    scanf("%d",&num2);
    printf("Digite um numero:\n");
    scanf("%d",&num3);
    
    soma = (num1*num1) + (num2*num2) +(num3*num3);
    
    printf("a soma dos numeros elevado ao quadrado é %d", soma);

    return 0;
}