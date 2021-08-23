#include <stdio.h>

int main() {
    int A,B,C,D,x = 0;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    if(A % 2 == 0){
        if(C && D >= 0 ){
            if(B > C){
                if(D > A){
                   if(C+D > A+B){
                        x = 1;
                   }
                }
           }
        }
    }
    if(x ==1)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
