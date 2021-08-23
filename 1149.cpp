#include <iostream>

using namespace std;

int main() {
    int soma=0,x,y,i;

    cin >> x >> y;

    while(y<=0){
     cin >> y;
    }
    for(i=x; i<x+y; i++){
        soma = soma + i;
    }
    cout << soma << endl;

    return 0;
}
