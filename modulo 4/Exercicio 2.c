#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
    
    printf("Digite a primeira nota:\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&n2);
    printf("Digite a terceira nota:\n");
    scanf("%f",&n3);
    printf("Digite a quarta numero:\n");
    scanf("%f",&n4);
    
    media = (n1+n2+n3+n4)/4;

    printf("a media das notas é %f", media);

    return 0;
}
