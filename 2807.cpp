#include <iostream>
 
using namespace std;
 
int main() {
 
    int length;
    int a[40];
    a[0] = 1;
    a[1] = 1;

    cin >> length;
    
    if(length > 2){
        for(int n = 0; n < length-2; n++){
            
            a[n+2] = a[n] + a[n+1];
        }
        for(int n = length-1; n > 0; --n){
            cout << a[n] << " ";
        }
        cout << a[0] << endl;
    }else{
        if(length == 1){
            cout << 1 << endl;
        }
        if(length == 2){
            cout << "1 1" <<endl;
        }
    }
 
    return 0;
}