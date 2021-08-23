#include <iostream>

using namespace std;

void imprimirPar(int x[5]){
    int i;
    for(i=0;i<5;i++){
        cout << "par[" << i << "] = " << x[i] << endl;
    }
}

void imprimirImpar(int x[5]){
    int i;
    for(i=0;i<5;i++){
        cout << "impar[" << i << "] = " << x[i] << endl;
    }
}
int main() {

    int x,i,flag1=0,flag2=0,x1[5],x2[5];

    for(i=0;i<15;i++){
        cin >> x;
        if(x%2 == 0){
            x2[flag2] = x;
            flag2++;
            if(flag2 == 5){
                imprimirPar(x2);
                flag2 = 0;
            }
        }else{
            x1[flag1] = x;
            flag1++;
            if(flag1 == 5){
                imprimirImpar(x1);
                flag1 = 0;
            }
        }
    }
    for(i=0;i<flag1;i++){
        cout << "impar[" << i << "] = " << x1[i] << endl;
    }
    for(i=0;i<flag2;i++){
        cout << "par[" << i << "] = " << x2[i] << endl;
    }

    return 0;
}
