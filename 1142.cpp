#include <iostream>

using namespace std;

int main() {
    int i,x,cont=1;

    cin >> x;

    for(i=0; i<x; i++){
        cout << cont << " "; cont++;
        cout << cont << " "; cont++;
        cout << cont << " "; cont++;
        cout<< "PUM" << endl;
        cont++;
    }

    return 0;
}
