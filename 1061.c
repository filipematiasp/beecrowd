#include <stdio.h>
 
int main() {
    int Di,Df,Hi,Hf,Mi,Mf,Si,Sf;
    int sum1,sum2,dif,resto;
    int D,H,M,S;

    scanf("Dia %d",&Di);
    scanf("%d : %d : %d\n",&Hi,&Mi,&Si);
    scanf("Dia %d",&Df);
    scanf("%d : %d : %d",&Hf,&Mf,&Sf);

    /*
    parte para adicionar uma base temporal
    if (Di != 1){
        base = Di -1;   
    } 
    */

    sum1 = ((Di - 1) * 24) + Hi;
    sum1 *= 3600;
    sum1 += (Mi * 60) + Si;

    sum2 = ((Df - 1) * 24) + Hf;
    sum2 *= 3600;
    sum2 += (Mf * 60) + Sf;

    dif = sum2 - sum1;

    D = dif / 86400;
    resto = dif % 86400;

    H = resto /  3600;
    resto %= 3600;

    M = resto / 60;
    resto %= 60;

    S = resto;

    printf("%d dia(s)\n",D);
    printf("%d hora(s)\n",H);
    printf("%d minuto(s)\n",M);
    printf("%d segundo(s)\n",S);
    


    return 0;
}