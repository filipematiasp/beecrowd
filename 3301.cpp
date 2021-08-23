#include <iostream>
 
using namespace std;
 
int main() {
 
    int H,Z,L;

    cin >> H >> Z >> L;

    if((Z < H && H < L) || (L < H && H < Z)){
        cout << "huguinho" << endl;
    }
    if((H < Z && Z < L) || (L < Z && Z < H)){
        cout << "zezinho" << endl;
    }
    if((H < L && L < Z) || (Z < L && L < H)){
        cout << "luisinho" << endl;
    }


    return 0;
}