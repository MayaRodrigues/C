#include <stdio.h>

int main (){
    int num;
    int soma=0;
//utilizando o for
    for (int i= 0 ;  i< 5; i++){
        printf ("Informe um numero:");
        scanf("%d", &num);

        soma = soma + num;
    }
    printf("A soma é %d", soma);
    return 0;
}
