#include <iostream>

using namespace std;

int main() {
    int i,x;

    cin >> x;

    while(x != 0){
        for(i=1; i<=x ;i++){
            if(i == x){
                cout << i;
                cout << endl;
            }else{
                cout << i << " ";
            }
        }
        cin >> x;
    }
    return 0;
}
