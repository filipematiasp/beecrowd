#include <stdio.h>

int main() {
    int x, y;

    scanf("%d",&x);

    if (x == 0){
        printf("E\n");
    }
    if (x>0 && x<=35){
        printf("D\n");
    }
    if (x>35 && x<=60){
        printf("C\n");
    }
    if (x>60 && x<=85){
        printf("B\n");
    }
    if (x>85 && x<=100){
        printf("A\n");
    }



    return 0;
}
