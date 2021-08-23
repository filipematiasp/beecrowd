#include <stdio.h>

int main() {
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a < b && b < c && c > a){
        printf("%d\n%d\n%d\n",a,b,c);
    }
    if(a < b && b > c && c < a){
        printf("%d\n%d\n%d\n",c,a,b);
    }
    if(a < b && b > c && c > a){
        printf("%d\n%d\n%d\n",a,c,b);
    }
    if(a > b && b < c && c < a){
        printf("%d\n%d\n%d\n",b,c,a);
    }
    if(a > b && b < c && c > a){
        printf("%d\n%d\n%d\n",b,a,c);
    }
    if(a > b && b > c && c < a){
        printf("%d\n%d\n%d\n",c,b,a);
    }
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
