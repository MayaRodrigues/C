#include <stdio.h>

int main (){
    int num;
    int soma=0;

    printf ("Informe um numero:");
    scanf("%d", &num);

//utilizando o while
    while(num != 0){
        soma = soma + num;

        printf ("Informe um numero:");
        scanf("%d", &num);

    }
    printf("A soma é %d", soma);
    return 0;
}
