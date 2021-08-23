#include <iostream>

using namespace std;

int main(){

    int pos=0,qt,aux=0,num,x,i;
    cin >> qt;

    cin >> x;
    num = x;

    for(i=1;i<qt;i++){
        cin >> x;
        if(x < num){
            num = x;
            pos++;
            pos = pos + aux;
            aux = 0;
        }else{
            aux++;
        }
    }
    cout << "Menor valor: " << num << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
