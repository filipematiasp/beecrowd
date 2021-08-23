#include <stdio.h>


int main() {

    int A,B,C,saida1;

    scanf("%d %d %d",&A,&B,&C);


    saida1 = (A+B+abs(A-B))/2;
    saida1 = (saida1+C+abs(saida1-C))/2;

    printf("%d eh o maior\n",saida1);

    return 0;
}
