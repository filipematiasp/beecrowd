#include <iostream>

using namespace std;

int main() {
    int i,x,cont1=1,cont2=1,cont3=1,somador=3;

    cin >> x;

    for(i=0; i<x; i++){
        cout << cont1 << " "; cont1++;
        cout << cont2 << " "; cont2 = cont2 + somador; somador = somador + 2;
        cout << cont3 << endl; cont3 = cont1*cont2;
    }

    return 0;
}
