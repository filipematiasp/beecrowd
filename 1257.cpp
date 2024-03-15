#include <iostream>

using namespace std;

int main() {
    int qtd, inputs, sizeHash;
    string letter;
   
    cin >> qtd;
    cin.ignore();

    for (int i = 0; i < qtd; i++){
        sizeHash = 0;
        cin >> inputs;
       
        for(int j = 0; j < inputs; j++){
            cin >> letter;

            for(size_t k = 0; k < letter.size(); k++){
                // cout << "letra= " <<letter[k] - 65 << " k= " << k << " j= " << j << " total= " << (letter[k] - 65) + k + j << endl;
                sizeHash += (letter[k] - 65) + k + j;
            }
            
        }
        cout << sizeHash << endl;
    }
    return 0;
}
