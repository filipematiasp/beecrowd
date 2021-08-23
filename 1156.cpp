#include <iostream>

using namespace std;

int main() {
    float soma=1,d=2,n=3;
    int i;

    for(i=0; i<19; i++){
        soma = soma + (n/d);
        n = n + 2;
        d = d * 2;
    }
    cout << fixed;
    cout.precision(2);
    cout << soma << endl ;

    return 0;
}
