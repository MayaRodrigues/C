#include <stdio.h>

int maior_tamanho(int vet[], int tam){
    int maior_num = 0;
    
    for (int i = 0 ; i< tam; i++){
        if(i==0){
            maior_num = vet[i];
        }
        if(vet[i] > maior_num){
            maior_num = vet[i];
        }
    }
    return maior_num;
} 
int main(){
    int tamanho = 10;
    int vet[] = {1 , 6 , 8 , 15 , 24,  32 , 47 , 88 , 4 , 2 };
    
    int maior_num = maior_tamanho(vet,tamanho);  
    printf("O maior numero do vetor é %d\n", maior_num);

    return 0;
}