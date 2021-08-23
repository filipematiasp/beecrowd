#include <stdio.h>
#define pi 3.14159

int main() {

    double A,B,C,saida1,saida2,saida3,saida4,saida5;

    scanf("%lf %lf %lf",&A,&B,&C);

    saida1 = A *C /2;
    saida2 = pi*(C*C);
    saida3 = ((A+B)*C) /2;
    saida4 = B*B;
    saida5 =  A*B;


    printf("TRIANGULO: %.3lf\n",saida1);
    printf("CIRCULO: %.3lf\n",saida2);
    printf("TRAPEZIO: %.3lf\n",saida3);
    printf("QUADRADO: %.3lf\n",saida4);
    printf("RETANGULO: %.3lf\n",saida5);
    return 0;
}
