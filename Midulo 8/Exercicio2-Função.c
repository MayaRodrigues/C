#include <stdio.h>

char caract(char caracter) {
    char atualizar = caracter;  
    
    if (caracter >= 'A' && caracter <= 'Z') {
        atualizar = caracter + 32;  
    } 
    else if (caracter >= 'a' && caracter <= 'z') {
        atualizar = caracter - 32;  
    }
    else{
        atualizar = caracter;
    }

    return atualizar;
} 

int main(){
    char caracter;
    printf ("digite uma caracter:\n");
    scanf("%c",&caracter);
    
   char atualizar = caract(caracter);
    printf("O caracter digitada é ' %c ' e sua outra versão é '%c'\n",caracter, atualizar);

    return 0;
}