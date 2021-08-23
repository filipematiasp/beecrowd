#include <iostream>

using namespace std;

int main() {
    int x1,x2;

    cin >> x1 >> x2;

    while(x1!=0 && x2!=0){
        if(x1>0 && x2>0){
            cout << "primeiro" <<endl;
        }else
        if(x1>0 && x2<0){
            cout << "quarto" <<endl;
        }else
        if(x1<0 && x2<0){
            cout << "terceiro" <<endl;
        }else
        if(x1<0 && x2>0){
            cout << "segundo" <<endl;
        }
        cin >> x1 >> x2;
    }
    return 0;
}
