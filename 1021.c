#include <stdio.h>
#include <math.h>


int main() {
    double x, floatPart,intPart;
    int cem,cin,vin,dez,cinco,dois,um,resto=0,resto2=0;
    int m01,m05,m10,m25,m50;
    float aux;
    scanf("%lf",&x);

    floatPart = modf(x,&intPart);

    cem = (int)x/100.0;
    resto = (int)x % 100;

    cin = resto/50;
    resto = resto % 50;

    vin = resto/20;
    resto = resto % 20;

    dez = resto/10;
    resto = resto % 10;

    cinco = resto/5;
    resto = resto % 5;

    dois = resto/2;
    resto = resto % 2;

    um = resto/1;

    aux = floatPart * 100;
    m50 = (int)aux/50;
    resto2 = (int)aux % 50;

    m25 = resto2/25;
    resto2 = resto2 % 25;

    m10 = resto2/10;
    resto2 = resto2 % 10;

    m05 = resto2/5;
    resto2 = resto2 % 5;

    m01 = resto2;


    printf("NOTAS:\n",x);
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cin);
    printf("%d nota(s) de R$ 20.00\n",vin);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n",x);
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",m50);
    printf("%d moeda(s) de R$ 0.25\n",m25);
    printf("%d moeda(s) de R$ 0.10\n",m10);
    printf("%d moeda(s) de R$ 0.05\n",m05);
    printf("%d moeda(s) de R$ 0.01\n",m01);


    return 0;
}
