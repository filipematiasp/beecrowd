#include <iostream>
 
using namespace std;
 
int main() {
    
    string name("AMO FAZER EXERCICIO NO URI");

    printf("<%s>",name.c_str());
    printf("\n");
    printf("<%30s>",name.c_str());
    printf("\n");
    printf("<%.20s>",name.c_str());
    printf("\n");
    printf("<%-20s>",name.c_str());
    printf("\n");
    printf("<%-30s>",name.c_str());
    printf("\n");
    printf("<%.30s>",name.c_str());
    printf("\n");
    printf("<%30.20s>",name.c_str());
    printf("\n");
    printf("<%-30.20s>",name.c_str());
    printf("\n");
 
    return 0;
}