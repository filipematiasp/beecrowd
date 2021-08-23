#include <iostream>

using namespace std;

int main() {
    float soma=0.0;
    int qt=0,id;

    cin >> id;

    while(id > 0){
        soma = id + soma;
        qt++;
        cin >> id;
    }

    cout << fixed;
    cout.precision(2);
    cout << soma/qt << endl;

    return 0;
}
