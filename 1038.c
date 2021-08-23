#include <stdio.h>

int main() {
    int cod,qt;
    float valor = 0.0;

    scanf("%d %d",&cod,&qt);

    switch (cod){
        case 1:
            valor = qt * 4;
        break;

        case 2:
            valor = qt * 4.5;
        break;

        case 3:
            valor = qt * 5;
        break;

        case 4:
            valor = qt * 2;
        break;

        case 5:
            valor = qt * 1.5;
        break;
    }
    printf("Total: R$ %.2f\n",valor);


    return 0;
}
