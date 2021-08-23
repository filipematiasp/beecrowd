#include <stdio.h>


int main() {
    int x,hora,min,seg,resto;

    scanf("%d",&x);

    hora = x / 3600;
    resto = x % 3600;

    min = resto / 60;
    resto = resto % 60;

    seg = resto;

    printf("%d:%d:%d\n",hora,min,seg);


    return 0;
}
