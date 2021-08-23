#include <stdio.h>

int main() {
    float a,b,c,aux;
    scanf("%f%f%f",&a,&b,&c);

    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }
    if(c > b){
        aux = b;
        b = c;
        c = aux;
    }
    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    aux = a*a;

    if(aux == (b*b) + (c*c)){
        printf("TRIANGULO RETANGULO\n");
    }
    if(a*a > b*b + c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a*a < b*b + c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a == b && b != c) || (b == c && c != a) || (a == c && c != b)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
