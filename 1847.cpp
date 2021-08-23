#include <iostream>

using namespace std;

//1 = :)  0 = :(
int main() {
    int x1,x2,x3,status=0;


    cin >> x1 >> x2 >> x3;

    if(x1>x2 && x2<=x3){
        status = 1;
    }else
    if(x1<x2 && x2>=x3){
        status = 0;
    }else
    if(x1<x2 && x2<x3 && ((x2-x1)>(x3-x2))){
        status = 0;
    }else
    if(x1<x2 && x2<x3 && ((x2-x1)<(x3-x2))){
        status = 1;
    }else
    if(x1>x2 && x2>x3 && ((x1-x2)>(x2-x3))){
        status = 1;
    }else
    if(x1>x2 && x2>x3 && ((x1-x2)<(x2-x3))){
        status = 0;
    }else
    if(x1==x2 && x2<x3){
        status = 1;
    }else
    if(x1==x2 && x2>x3){
        status = 0;
    }

    if(status == 1){
        cout << ":)" << endl;
    }else
    cout << ":(" << endl;


    return 0;   
}