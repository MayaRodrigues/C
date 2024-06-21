/*Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos.*/

#include <stdio.h>

int main(){
    int vet [10]= {0,0,0,0,0,0,0,0,0,0};

    
    for (int i=0 ; i<10; i++){
        printf("Digite o valor do vetor da possição %d ", i+1);
        scanf("%d",&vet[i]);
        
        if(vet[i] < 0){
            vet[i] = 0;
        }
    }
   for (int i = 0; i<10; i++ ){
       printf ("o valor do vetor na posição %d vale %d\n", i ,vet[i] );
   }

    return 0;
}