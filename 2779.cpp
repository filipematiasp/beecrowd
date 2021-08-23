#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int qtd, compradas, num, falta;
    int array[100];

    cin >> qtd;
    falta = qtd;
    cin >> compradas;

    for(int i = 0; i < qtd; i++){
        array[i] = 0;
    }
    
    for(int i = 0; i < compradas; i++){
        cin >> num;
        array[num-1] = 1;
    }

    for(int i = 0; i < qtd; i++){
        if(array[i] == 1){
            falta--;
        }
    }
    
    cout << falta << endl;


    return 0;
}