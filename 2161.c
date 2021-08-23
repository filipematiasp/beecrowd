#include <stdio.h>

double fracao(int);

int main()
{
    int y,qtd;
    double temp;

    scanf("%d",&qtd);

    temp = 3 + fracao(qtd);

    printf("%.10f\n",temp);

    return 0;
}

double fracao(int n)
{
    double vfra;

    if(n == 0)
    return(0);
    else{
        vfra = 1 / (fracao(n -1)+6);
        return (vfra);
    }
}




