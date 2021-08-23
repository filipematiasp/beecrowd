#include <iostream>

using namespace std;

int main() {
    int qt,i,num;

    cin >> qt;
    for(i=0;i<qt;i++){
        cin >> num;
        if(num%2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }



    return 0;
}
