#include <iostream>

using namespace std;

int main() {
    int x1,x2,i,soma=0;

    cin >> x1 >> x2;
    while(x1>0 && x2>0){
        if(x1<x2){
            swap(x1,x2);
        }
        soma = 0;
        for(i=x2;i<=x1;i++){
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << endl;
        cin >> x1 >> x2;
    }

    return 0;
}
