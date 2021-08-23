#include <iostream>

using namespace std;

int main(){
    int x,i,soma,aux;

    cin >> x;

    while(x != 0){
        soma=0;
        if(x%2 == 0){
            aux = x;
        }else{
            aux = x+1;
        }
        for(i=0; i<5; i++){
            soma = soma + aux;
            aux = aux +2;
        }
        cout << soma << endl;
        cin >> x;
    }
    return 0;
}
