#include <stdio.h>


int main() {
    int x,cem,cin,vin,dez,cinco,dois,um,resto;
    scanf("%d",&x);

    cem = x/100;
    resto = x % 100;

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

    printf("%d\n",x);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cin);
    printf("%d nota(s) de R$ 20,00\n",vin);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",um);


    return 0;
}
