#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int qtd;
    int sum;
    char linha[14];
    string temp;

    cin >> qtd;
    for (int i = 0; i < qtd; i++){
        cin >> linha;
        temp = "";
        sum = 0;
        for (int j = 0; j < 14; j++){
            if(isdigit(linha[j])){
                temp += linha[j];
            } else {
                if(!temp.empty()){
                    sum += stoi(temp);
                    temp = "";
                }
            }
        }

        if (!temp.empty()) {
            sum += stoi(temp);
        }

        cout << sum << endl;

    }
 return 0;
}