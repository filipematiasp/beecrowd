#include <iostream>

using namespace std;

int main() {

    double x;
    int i;

    cout << fixed;
    cout.precision(4);

    cin >> x;

    for(i=0;i<100;i++){

        cout << "N[" << i << "] = " << x << endl;
        x = x/2;
    }
    return 0;
}
