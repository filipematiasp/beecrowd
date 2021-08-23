#include <stdio.h>

int main(){
    int x,y,tp;
    scanf("%d %d",&x,&y);

    if(x < y){
        tp = y - x;
    }else
    if(x == y){
        tp = 24;
    }else
        tp = (24 - x) + y;

    printf("O JOGO DUROU %d HORA(S)\n",tp);

    return 0;
}
