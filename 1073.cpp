#include <iostream>

using namespace std;

int main (){
    int i,x;

    cin >> x;

    for(i=2;i<=x;i=i+2){
        cout << i << "^2 = "<< i*i <<endl;
    }

    return 0;
}
