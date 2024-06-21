/* Faça um programa que leia 1 numeros e escreva o maior e o menor valor 
lido.
*/
#include <stdio.h>

int main(){
    int num = 0;
    int maior= 0;
    int menor = 0;
    
    for(int i = 0 ; i < 10; i++){
        printf("informe o valor %d de 10:\n", i + 1);
        scanf("%d", &num);
      
      //primeiro loop  
        if(i == 0){
            maior = num;
            menor = num; 
        }
        
        //nos demais loop 
        //maior
        if( num > maior){
            maior = num;
        }
        //menor 
        if( num < menor){
            menor = num; 
        }
    }
    printf("o maior valor é %d e o menor valor é %d\n", maior, menor);
    
    return 0;
}