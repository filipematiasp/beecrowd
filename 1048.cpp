#include <iostream>

using namespace std;

int main(){
    float x,y,flag,
             a=0.15,b=0.12,c=0.10,d=0.07,e=0.04;

    cin >> x;

    if(x>= 0 && x<=400.00){
        y = x * a;
        flag = a;
    }else
    if(x>= 400.01 && x<=800.00){
        y = x * b;
        flag = b;
    }else
    if(x>= 800.01 && x<=1200.00){
        y = x * c;
        flag = c;
    }else
    if(x>= 1200.01 && x<=2000.00){
        y = x * d;
        flag = d;
    }else{
        y = x * e;
        flag = e;
    }

    cout << fixed;
    cout.precision(2);
    cout << "Novo salario: "<< y + x << endl
         <<"Reajuste ganho: "<< y <<endl;
    cout.precision(0);
    cout << "Em percentual: "<< flag *100 <<" %"<<endl;


    return 0;
}
