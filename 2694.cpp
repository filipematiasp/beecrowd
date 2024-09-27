#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int qtd;
    char linha[14];
    string num1 = "", num2 = "", num3= "";


    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> linha;

        if(isdigit(linha[2])){
            num1 = string(1, linha[2]);
        }
        if(isdigit(linha[3])){
            num1 += string(1, linha[3]);
        }

        if(isdigit(linha[5])){
            num2 = string(1, linha[5]);
        }
        if(isdigit(linha[6])){
            num2 += string(1, linha[6]);
        }
        if(isdigit(linha[7])){
            num2 += string(1, linha[7]);
        }

        if(isdigit(linha[11])){
            num3 = string(1, linha[11]);
        }
        if(isdigit(linha[12])){
            num3 += string(1, linha[12]);
        }

        cout << stoi(num1) + stoi(num2) + stoi(num3) << endl;

    }

}