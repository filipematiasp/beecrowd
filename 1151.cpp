#include <iostream>

using namespace std;

int main() {
    int a,b,aux,qt,i;

    cin >> qt;
    a=0;
    b=1;
    cout << a << " " << b;
    for(i=2;i<qt;i++){
        aux = a + b;
        a = b;
        b = aux;
        cout << " " << aux;
    }
    cout <<endl;


    return 0;
}
