#include <iostream>

using namespace std;

int main() {
    int x1,x2;

    cin >> x1 >> x2;
    while(x1 != x2){
        if(x1 > x2){
            cout << "Decrescente" << endl;
        }else
            cout << "Crescente" << endl;
        cin >> x1 >> x2;
    }

    return 0;
}
