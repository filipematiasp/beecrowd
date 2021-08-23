#include <stdio.h>
#include <math.h>

int verificar(int L, int C ,int R1 ,int R2){
    float x1,x2,x3;
    if( ((R1+R1+R2+R2) <= L && (R1+R1) <= C && (R2+R2) <= C) || ((R1+R1+R2+R2) <= C && (R1+R1) <= L && (R2+R2) <= L) ){
        return 1;
    }
    x1 = R1*sqrt(2)+R1;
    x2 = R2*sqrt(2)+R2;
    x3 = sqrt((L*L) + (C*C));
    printf("%f %f\n",x1+x2,x3);
    if (x1+x2 <= x3){
        return 1;
    }
        return 0;
}
int main(){
    int L,C,R1,R2,aux = 0;

    while(scanf("%d %d %d %d",&L,&C,&R1,&R2)){
        if (L == 0 && C ==0 && R1 == 0 && R2 == 0) break;
        aux = verificar(L,C,R1,R2);

        if(!aux){
            printf("N\n");
        }else
            printf("S\n");
    }
return 1;
}
