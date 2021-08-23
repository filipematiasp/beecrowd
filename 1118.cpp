#include <iostream>

using namespace std;

int main(){
    float x1,x2;
    int flag = 1;

    while(flag == 1){
        cin >> x1;
        while(x1 < 0|| x2 >10){
            cout << "nota invalida" << endl;
            cin >> x1;
        }
        cin >> x2;
        while(x2 < 0 || x2 >10){
            cout << "nota invalida" << endl;
            cin >> x2;
        }
        cout<<fixed;
        cout.precision(2);
        cout << "media = " << (x1+x2)/2 <<endl;
        flag = 0;
        while(flag < 1 || flag > 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> flag;
        }
    }
    return 0;
}

