#include <iostream>

using namespace std;

int main() {
    int i,x,cont1=1,cont2=1,cont3=1,somador=2;

    cin >> x;

    cout << cont1 << " ";
    cout << cont2 << " ";
    cout << cont3 << endl;
    for(i=0; i<x*2-1; i++){
        if(i%2 == 0){
            cout << cont1 << " ";
            cont2 ++;
            cout << cont2 << " ";
            cont3 ++;
            cout << cont3 << endl;
        }else{
            cont1 ++;
            cont2 = cont2 + somador;
            cont3 = cont1 * cont2;
            cout << cont1 << " ";
            cout << cont2 << " ";
            somador = somador+2;
            cout << cont3 << endl;

        }
    }

    return 0;
}
