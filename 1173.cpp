#include <iostream>

using namespace std;

int main() {

    int x,i,X[10];

    cin >> x;
    X[0] = x;
    for(i=1;i<10;i++){
        X[i] = X[i-1] * 2;
    }
    for(i=0;i<10;i++){
        cout << "N[" << i << "] = " <<X[i] << endl;
    }

    return 0;
}
