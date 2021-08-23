#include <stdio.h>

int main() {

    float x,y,z,saida;

    scanf("%f %f %f",&x,&y,&z);
    saida = y * z;
    scanf("%f %f %f",&x,&y,&z);

    saida += y * z;
    printf("VALOR A PAGAR: R$ %.2f\n",saida);
    return 0;
}
