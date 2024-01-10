#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int qtd, aux, num, div;

    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> num;
        div = 0;
        for(aux = 2; aux <= sqrt(num); aux++)
            if(num % aux == 0){
                div++;
            }

        if(div==0){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not Prime" << endl;
        }
    }
    
    return 0;
}