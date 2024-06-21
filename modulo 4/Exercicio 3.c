#include <stdio.h>

int main(){
    float ap1;
    float ap2;
    float ap3;
    float total_apos=0;
    float total;
    float premio;
    float premio1, premio2, premio3;
    float por1, por2, por3, total_porcentagem=0;
    
    printf("Digite o quanto a primeria pessoa dejesa  dinheiro apostar:\n");
    scanf("%f",&ap1);
    printf("Digite o quanto a segunda pessoa dejesa  dinheiro apostar:\n");
    scanf("%f",&ap2);
    printf("Digite o quanto a terceira pessoa dejesa  dinheiro apostar:\n");
    scanf("%f",&ap3);
    printf("Digite o valor do premio\n");
    scanf("%f",&premio);
    
    total_apos = (float)(ap1 + ap2 + ap3);
    printf("o total de apostas %.2f\n", total_apos);
    
    por1 =(float) (ap1/ total_apos);
    por2 = (float)(ap2 / total_apos);
    por3 =(float)(ap3/ total_apos);
    
    total_porcentagem =(float)(por1 + por2 + por3);
    
    printf("o total de porcentagens é %.2f\n",total_porcentagem);
    
    premio1 = (float) (premio * por1);
    premio2 = (float)(premio *por2);
    premio3 =(float)(premio3 *por3);
    
    total=(float)(premio1 +premio2 +premio3);
    
    printf("o total em premios é %.2f\n",total);
    
    printf("o 1 apostador apostou %.2f que corresponde a %.2f e devera receber o premio %.2f\n",ap1, por1,premio1);
    printf("o 2 apostador apostou %.2f que corresponde a %.2f e devera receber o premio %.2f\n",ap2, por2,premio2);
    printf("o 3 apostador apostou %.2f que corresponde a %.2f e devera receber o premio %.2f\n",ap3, por3, premio3);

    return 0;
}
