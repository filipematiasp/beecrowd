#include <stdio.h>

int main() {

    int num,sala;
    float y,saida;

    scanf("%d",&num);
    scanf("%d",&sala);
    scanf("%f",&y);

    saida = sala * y;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",saida);
    return 0;
}
