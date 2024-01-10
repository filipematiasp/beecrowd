#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int qtd, qtdPeople;
    string * language;
    string temp;

    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> qtdPeople;
        language = new string[qtdPeople];
        
        for (int j = 0; j < qtdPeople; j++){
            cin >> language[j];
        }

        temp = language[0];
        for (int j = 0; j < qtdPeople; j++){
            if (temp != language[j]){
                temp = "ingles";
                break;
            }
            
        }
        
        cout << temp << endl;        
    }
    
   
    return 0;
}

