#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct dados{
    int qtMoradores;
    int consumo;
    float media;
}Dados;

Dados* inicia_lista(int tam){
    Dados *x;

    x = (Dados*)calloc(tam,sizeof(Dados));
    if(x == NULL){
        printf("Erro na alocação");
        exit(1);
    }
    return x;
}

int cmp (const void *x, const void *y){
   int consX, consY;
   consX = ((Dados *)x)->media;
   consY = ((Dados *)y)->media;
   return consX - consY;
}

void ordenar_lista(Dados *x,int tam){
    int i;

    qsort(x,tam,sizeof(Dados),cmp);

    for(i=0; i<tam; i++){
        if((x+i)->media == (x+i+1)->media){
            (x+i+1)->qtMoradores += (x+i)->qtMoradores;
            (x+i)->qtMoradores = 0;
        }
    }
}

int main(){
    int tamanho;
    int i,qtMo,Cons,cid=1,Preal,Pfrac;
    float Tmora=0,Tcons=0,media;
    Dados *lista;

    scanf("%d",&tamanho);

    while(tamanho != 0){
        lista = inicia_lista(tamanho);

        //inserir na lista
        for(i=0; i<tamanho; i++){
            scanf("%d %d",&qtMo,&Cons);
            (lista+i)->qtMoradores = qtMo;
            (lista+i)->consumo = Cons;
            (lista+i)->media = Cons/qtMo;
            Tmora += qtMo;
            Tcons += Cons;
        }
        ordenar_lista(lista,tamanho);

        //impressao
        if(cid != 1) printf("\n");

        printf("Cidade# %d:\n",cid);

        cid++;

        for(i=0; i<tamanho; i++){
            if((lista+i)->qtMoradores != 0){
                printf("%d%c%.0f",(lista+i)->qtMoradores,'-',(lista+i)->media);
                if(i != tamanho-1){
                    printf(" ");
                }
            }
        }
        media = Tcons/Tmora-0.0049999999;
        printf("\nConsumo medio: %0.2f m3.\n",media);

        Tmora = Tcons = 0;
        free(lista);

        scanf("%d",&tamanho);
    }
    return 0;
}
