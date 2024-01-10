#include <iostream>
#include <string>

using namespace std;

int main(){
    int qtd;
    string line, mensage;

    cin >> qtd;
    cin.ignore();

    for (int i = 0; i < qtd; i++){
        getline(cin, line);
        mensage = "";

        if(line[0] != ' '){
            mensage += line[0];
        }
        for (size_t i = 1; i < line.length(); i++){
            if(line[i] != ' ' && line[i-1] == ' '){
                mensage += line[i];
            }
        }
        
        cout << mensage << endl;       
        
    }
    
        



    return 0;
}