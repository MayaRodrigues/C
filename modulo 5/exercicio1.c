#include <stdio.h>

int main(){
    int num =1 ;
    int contador = 0;
    printf("Apresentando os 5 primeiros multiplos de 3:\n");
    while(contador < 5){
        if(num % 3 == 0){
            printf("o numero %d é multiplo de 3. \n", num);
            contador = contador + 1;
            
        }
        num = num +1;
    }

    return 0;
}