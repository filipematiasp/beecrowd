#include <stdio.h>

int main(){
    int h1,h2,m1,m2,H,M;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    if(m1>m2){
        M = (60-m1)+m2;
        if(h1<h2) H = h2 - h1 - 1;
        else H = (24 - h1) + h2 -1;
    }
    if(m1<m2){
        M = m2-m1;
        if(h1<h2) H = h2 - h1;
        else H = (24 - h1) + h2;
    }
    if(h1==h2 && m1==m2){
        H = 24;
        M = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);

    return 0;
}
