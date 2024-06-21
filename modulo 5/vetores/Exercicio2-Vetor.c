/* Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui. 
*/

#include <stdio.h>

int main(){
    int vet [10]= {0,0,0,0,0,0,0,0,0,0};
    int cont_par =0;

    
    for (int i=0 ; i<10; i++){
        printf("Digite o valor do vetor da possição %d ", i+1);
        scanf("%d",&vet[i]);
    }
    for(int i =0 ; i<10; i++){
        if(vet[i] % 2==0 ){
            printf("o valor %d é par\n", vet[i]);
            cont_par = cont_par + 1;
        }
    }
    printf("temos um total de %d valores pares no vetor", cont_par);

    return 0;
}