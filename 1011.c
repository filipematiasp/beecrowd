#include <stdio.h>
#define pi 3.14159
int main() {

    double x,saida;

    scanf("%lf",&x);

    saida = (4/3.0) * pi * (x*x*x);

    printf("VOLUME = %.3lf\n",saida);
    return 0;
}
