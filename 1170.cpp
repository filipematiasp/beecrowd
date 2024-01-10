#include <iostream>

using namespace std;

int main(){
    
    int qtd, count = 0;
    float weight;

    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> weight;
        count = 0;
        while (weight > 1){
            weight = weight / 2;
            count++;
        }
        cout << count << " dias" << endl;   
    }
    return 0;
}

