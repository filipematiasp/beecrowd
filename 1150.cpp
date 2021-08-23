#include <iostream>

using namespace std;

int main() {
    int x,z,conta,aux,somador=1;

    cin >> x;
    cin >> z;
    while (z <= x){
        cin >> z;
    }
    conta = x;
    aux = conta+1;
    while(conta < z){
        conta = conta + aux;
        aux++;
        somador++;
    }
    cout << somador << endl;


    return 0;
}
