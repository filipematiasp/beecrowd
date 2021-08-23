#include <iostream>

using namespace std;

int main() {
    int x,g=0,a=0,d=0;

    cin >> x;
    while(x != 4){
        if(x == 1) a++;
        if(x == 2) g++;
        if(x == 3) d++;
    cin >> x;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
