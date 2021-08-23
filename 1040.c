#include <stdio.h>

int main() {
    float n1,n2,n3,n4,y,media,exame;

    scanf("%f %f %f %f",&n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    printf("Media: %.1f\n",media);
    if(media >= 7){
        printf("Aluno aprovado.\n");
        exit(0);
    }
    if(media < 5){
        printf("Aluno reprovado.\n");
        exit(0);
    }
    if(media >=0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&exame);
        printf("Nota do exame: %.1f\n",exame);
        if((media + exame)/2 >= 5){
            printf("Aluno aprovado.\n");
        }else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",(media + exame)/2);
    }



    return 0;
}
