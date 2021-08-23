#include <iostream>

using namespace std;

int main() {
    int i,j,qt,x1,x2,soma;

    cin >> qt;
    for(i=0;i<qt;i++){
        soma = 0;
        cin >> x1 >> x2;
        if(x2<x1){
            swap(x1,x2);
        }
        for(j=x1+1;j<x2;j++){
            if(j%2 != 0){
                soma += j;
            }
        }
        cout << soma << endl;
    }



    return 0;
}
