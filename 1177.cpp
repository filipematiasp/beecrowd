#include <iostream>

using namespace std;

int main() {
    int N[1000];
    int i,t,x=0;

    cin >> t;

    for(i=0;i<1000;i++){
        N[i] = x;
        x++;
        if(x == t){
            x = 0;
        }
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
