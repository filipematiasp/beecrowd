#include <iostream>

using namespace std;

int main() {
    unsigned int soma;
    unsigned int x,y;

    while(scanf("%u %u", &x,&y)!= EOF){
        soma = x ^ y;
        cout << soma << endl;
    }

    return 0;
}
