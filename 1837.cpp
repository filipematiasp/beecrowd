#include <iostream>

using namespace std;

int main() {
    int a,b,i,j,q,r;

    cin >> a >> b;
    if(a >=0){
        q = a/b;
        r = a%b;
    }else{
        for(i=1000; i>-1001; i--){
            for(j=0; j<(abs(b)); j++){
                if(a == b*i+j){
                     q = i;
                     r = j;
                     break;
                }
            }
        }
    }
    cout << q << " " << r << endl;

    return 0;   
}