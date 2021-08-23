#include <iostream>

using namespace std;

int main() {
    int i,x,y,soma=0;

    cin >> x >>y;

    if(x > y) swap(y,x);
    for(i=x; i<=y; i++){
        if(i%13 != 0){
            soma =soma + i;
        }
    }
    cout << soma << endl;


    return 0;
}
