/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor
e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha. */

#include <stdio.h>

int main(){
    int A[6]= {1,0,5,-2,-5,7};
    int soma = A[0] + A[1] + A[5];
    
    printf("A soma deu %d", soma);
    
    A[4] = 100;
    
    for (int i=0 ; i<6; i++){
        printf("O valor do vetor A %d\n", A[i]);
    }

    return 0;
}