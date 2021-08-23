#include <iostream>

using namespace std;

int main() {
    int i,x;

    cin >> x;

    for(i=1; i<x+1; i++){
        if((x%i) == 0){
            cout << i << endl;
        }
    }

    return 0;
}
