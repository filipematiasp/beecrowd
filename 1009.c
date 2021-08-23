#include <stdio.h>

int main() {

    double x,y,saida;
    char nome[20];

    gets(nome);
    scanf("%lf",&y);
    scanf("%lf",&x);

    saida = y + (x*0.15);
    printf("TOTAL = R$ %.2f\n",saida);
    return 0;
}
