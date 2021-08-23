#include <stdio.h>

int main() {
    int x,a,m,d,resto;

    scanf("%d",&x);

    a = x / 365;
    resto = x % 365;

    m = resto / 30;
    resto = resto %30;

    d = resto;


    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);

    return 0;
}
