#include <iostream>

using namespace std;

int main() {
    int i,x,y;

    cin >> x >> y;

    for(i=1; i<=y ;i++){
        if(i%x == 0){
            cout << i;
            cout << endl;
        }else{
            cout << i << " ";
        }
    }

    return 0;
}
