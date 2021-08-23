#include <stdio.h>

int primo(int);

int main() {
    int qtd,i,salto,sum,primoset,stop=0;
    int valores[20];

    while(1){

        sum=0;

        scanf("%d",&qtd);
        for(i=0;i<qtd;i++){
            scanf("%d",&valores[i]);
        }
        scanf("%d",&salto);
        for(i=qtd-1; i>=0; i=i-salto){
            sum = sum + valores[i];
        }

        //printf("sum=%d\n",sum);


        primoset = primo(sum);
        //printf("primo=%d\n",primoset);
        if (primoset == 0){
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
            return 0;
        }else{
            printf("Bad boy! I’ll hit you.\n");//nao e primo
        }

    }
}
int primo(int numero){
    int raiz,i;
    raiz = numero/2;

    if(numero != 2 && numero % 2 == 0 || numero == 1 ){
        return 1;
    }
    for(i=3; i<= raiz; i += 2){
       // printf("entrou:%d\n",i);
        if(numero % i == 0){
            return 1;
        }
    }

    return 0;
}