#include <iostream>

using namespace std;

int main (){
    int i,qt;
    double x1,x2,x3;

    cin >> qt;

    cout << fixed;
    cout.precision(1);
    for(i=0;i<qt;i++) {
        cin >> x1 >>x2 >>x3;
        cout << (x1*2+x2*3+x3*5)/10 <<endl;
    }
    return 0;
}
