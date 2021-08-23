#include <iostream>

using namespace std;

int main (){
    int i,pos,num=0,x;

    for(i=1;i<101;i++){
        cin >> x;
        if(x > num){
            pos = i;
            num = x;
        }
    }
    cout << num <<endl << pos << endl;


    return 0;
}
