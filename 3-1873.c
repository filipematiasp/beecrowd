#include <stdio.h>
#include <string.h>

int main()
{
    int qtd,y;
    char j1[10], j2[10];
    char tesoura[] = "tesoura";
    char papel[] = "papel";
    char pedra[] = "pedra";
    char lagarto[] = "lagarto";
    char spock[] = "spock";

    scanf("%d",&qtd);

    for(y=0; y<qtd; y++){
        scanf("%s %s",j1,j2);
        if(strcmp(j1,j2) == 0){
            printf("empate\n");
        }else{
            if(strcmp(j1,tesoura)==0){
                if(strcmp(j2,papel)==0 || strcmp(j2,lagarto)==0){
                    printf("rajesh\n");
                }else printf("sheldon\n");
            }
            if(strcmp(j1,papel)==0){
                if(strcmp(j2,pedra)==0 || strcmp(j2,spock)==0){
                    printf("rajesh\n");
                }else printf("sheldon\n");
            }
            if(strcmp(j1,pedra)==0){
                if(strcmp(j2,lagarto)==0 || strcmp(j2,tesoura)==0){
                    printf("rajesh\n");
                }else printf("sheldon\n");
            }
            if(strcmp(j1,lagarto)==0){
                if(strcmp(j2,spock)==0 || strcmp(j2,papel)==0){
                    printf("rajesh\n");
                }else printf("sheldon\n");
            }
            if(strcmp(j1,spock)==0){
                if(strcmp(j2,tesoura)==0 || strcmp(j2,pedra)==0){
                    printf("rajesh\n");
                }else printf("sheldon\n");
            }
        }

    }
    return 0;
}
