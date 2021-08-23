#include <stdio.h>
#include <math.h>


int verificar(int r1, int x1, int y1, int r2,int x2,int y2){
    float eucli;

    eucli = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

    if((eucli + r2) <= r1){
        return 0 ;
    }
    else
        return 1;
}

int main() {

    int r1,x1,y1,r2,x2,y2,res;

    while((scanf ("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2)) != EOF){

        res = verificar(r1,x1,y1,r2,x2,y2);

        if(res == 1){
            printf("MORTO\n");
        }else
            printf("RICO\n");

    }
    return 0;
}
