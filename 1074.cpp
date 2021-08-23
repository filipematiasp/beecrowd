#include <iostream>

using namespace std;

int main (){
    int i,qt,x;

    cin >> qt;
    for(i=0; i<qt; i++){
        cin >> x;
        if(x == 0){
            cout<<"NULL"<<endl;
        }else
        if(x < 0 && x%2 == 0){
            cout<<"EVEN NEGATIVE"<<endl;
        }else
        if(x < 0 && x%2 != 0){
            cout<<"ODD NEGATIVE"<<endl;
        }else
        if(x > 0 && x%2 == 0){
            cout<<"EVEN POSITIVE"<<endl;
        }else
        if(x > 0 && x%2 != 0){
            cout<<"ODD POSITIVE"<<endl;
        }
    }



    return 0;
}
