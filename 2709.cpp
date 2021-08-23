#include <iostream>
#include <cmath>

using namespace std;

int primo(int);

int main() {
 
    int moedas[20], qtd, salto, valor, sum;

    while(scanf("%d", &qtd) != EOF){
        
        sum = 0;
        for(int i = 0; i < qtd; i++){
            cin >> valor;
            moedas[i] = valor;
        }
        cin >> salto;

        for(int i = qtd-1; i >= 0; i -= salto){
            sum += moedas[i];
        }

        if(sum == 1){
            cout << "Bad boy! I’ll hit you." << endl;
        }else{
            if(primo(sum) == 1){
                cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
            }else{
                cout << "Bad boy! I’ll hit you." << endl;
            }
        }
        
    }
    return 0;
}


int primo(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

