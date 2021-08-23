#include <iostream>

using namespace std;

int main() {
    float x,imposto;

    cin >> x;
    cout << fixed;
    cout.precision(2);

    if(x >= 0 && x <= 2000.00){
        cout << "Isento" << endl;
    }else
    if(x >= 2000.01 && x<=3000.00){
        x = x - 2000.00;
        imposto = x * 0.08;
        cout << "R$ " << imposto << endl;
    }else
    if(x>=3000.01 && x<=4500.00){
        x = x - 3000.00;
        imposto = 80.0;
        imposto = imposto + x * 0.18;
        cout << "R$ " << imposto << endl;
    }else
    if(x > 4500.00){
        x = x - 4500.00;
        imposto = 350.0;
        imposto = imposto + x * 0.28;
        cout << "R$ " << imposto << endl;
    }
    return 0;
}
