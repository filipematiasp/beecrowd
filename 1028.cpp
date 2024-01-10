#include <iostream>

using namespace std;


int mdc(int a, int b){

    int resto;

    do{
        resto = a % b;

        a = b;
        b = resto;

    }while(resto != 0);

    return a;
}


int main(){
    
    int qtd,a,b;
   
    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> a >> b;
        cout << mdc(a,b) << endl;

    }
    return 0;
}

