#include <stdio.h>

int MDC(int a, int b){
    int resto;
    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return abs(a);
}

int main() {

    int x,quant,N1,N2,D1,D2,flag;
    int vetor[20000],vetor2[20000],divisor;
    char div , op;

    scanf("%d",&quant);
    flag = 0;
    for(x = 0; x<quant; x++){

        scanf("%d %c %d %c %d %c %d",&N1,&div,&D1,&op,&N2,&div,&D2);
        if(op == '+'){
            vetor[flag] = (N1*D2 + N2*D1);
            flag ++;
            vetor[flag] = (D1*D2);
            flag++;
        }
        if(op == '-'){
            vetor[flag] = (N1*D2 - N2*D1);
            flag ++;
            vetor[flag] = (D1*D2);
            flag++;
        }
        if(op == '*'){
            vetor[flag] = (N1*N2);
            flag ++;
            vetor[flag] = (D1*D2);
            flag++;
        }
        if(op == '/'){
            vetor[flag] = (N1*D2);
            flag ++;
            vetor[flag] = (N2*D1);
            flag++;
        }
    }

//    divisor = MDC(-2,8);
//    printf("%d",divisor);
    for(x = 0; x<((quant*2)-1); x++){
        divisor = MDC(vetor[x],vetor[x+1]);
        vetor2[x] = vetor[x]/divisor;
        vetor2[x+1] = vetor[x+1]/divisor;
        printf("%d/%d = %d/%d\n",vetor[x],vetor[x+1],vetor2[x],vetor2[x+1]);
        x ++;
    }
    return 0;
}
