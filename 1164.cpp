#include <iostream>

using namespace std;

int main(){
    int qt,i,j,soma;
    long long x;

    cin >> qt;

    for(i=0; i<qt; i++){
        cin >> x;
        soma = 0;
        for(j=1; j<x; j++){
            if(x%j == 0){
                soma = soma + j;
            }
        }
        if(soma == x){
            cout << x << " eh perfeito" << endl;
        }else{
            cout << x << " nao eh perfeito" << endl;
        }
    }

    return 0;
}
