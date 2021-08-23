#include <stdio.h>

int main()
{
    int qtd,y,soma,jj1,jj2;
    char j1[10], j2[10];

    scanf("%d",&qtd);

    for(y=0; y<qtd; y++){
        scanf("%s",j1);
        scanf("%s",j2);

        jj1 = j1[0]+j1[1]+j1[2];
        jj2 = j2[0]+j2[1]+j2[2];
        soma =jj1-jj2;

        if(soma==0){
            if(jj1==310){
                printf("Aniquilacao mutua\n");
            }
            if(jj1==313){
                printf("Sem ganhador\n");
            }
            if(jj1==321){
                printf("Ambos venceram\n");
            }
        }else if(soma<0){
            printf("Jogador 1 venceu\n");
            }else{
                printf("Jogador 2 venceu\n");
        }

    }
    return 0;
}
