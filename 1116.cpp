#include <iostream>

using namespace std;

int main(){
    int qt=0,i;
    float x,y;

    cin >> qt;

    cout<<fixed;
    cout.precision(1);

    for(i=0;i<qt;i++){
        cin >> x >> y;
        if(y == 0){
            cout << "divisao impossivel"<< endl;
        }
        else{
            cout << x/y << endl;
        }
    }


    return 0;
}
