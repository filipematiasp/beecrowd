#include <iostream>
#include <cctype>
#include <map>
#include <vector>   //para usar vector
#include <utility>   // Para std::pair
#include <algorithm>    //sort

using namespace std;

int main() {
    int qtd;
    string minhaString;
    map<char, int> ocorrencias;

    cin >> qtd;
    cin.ignore();

    for (int i = 0; i < qtd; i++){
        getline(cin, minhaString);
    
        for (char caractere : minhaString) {
            if (isalpha(caractere)) {
                caractere = tolower(caractere);
                ocorrencias[caractere] += 1;
            }
        }

        map<char, int>::iterator it;
        for (it = ocorrencias.begin(); it != ocorrencias.end(); it++){
            cout << it->first << " => " << it->second << '\n';
        }


        vector<pair<char, int>> vectorCopy(ocorrencias.begin(), ocorrencias.end());

        auto comparador = [](const auto &a, const auto &b){
            return a.second > b.second;
        };

        sort(vectorCopy.begin(), vectorCopy.end(), comparador);

        for(const auto &pair : vectorCopy){
            cout << pair.first << "->" << pair.second << endl;
        }

        ocorrencias.clear();

        for(const auto &pair : vectorCopy){
            cout << pair.first <<  "copiando" << endl;
            ocorrencias[pair.first] = pair.second;
        }
        
        for (it = ocorrencias.begin(); it != ocorrencias.end(); it++){
            cout << it->first << " ===> " << it->second << '\n';
        }

        auto iter = ocorrencias.begin();

        cout << iter->first << " primeriro " << endl;

        for(auto iter = ocorrencias.begin(); iter != ocorrencias.end(); iter++){
            auto nextIter = next(iter);
            if (nextIter != ocorrencias.end()){
                
            }
            
        }
        

    
    }
    return 0;
}
