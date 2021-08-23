#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int tam,A,B,C;

    while(true){
        cin >> A;
        if(A==0) break;
        cin >> B >> C;
        tam = sqrt( ((A*B)*100)/C );
        cout << tam << endl;
    }
    return 0;
}
