#include <iostream>
#include <map>

using namespace std;

int main(){
    int qtd;
    string str;

    map<string, int> myMap;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> str;
        myMap.insert({str, 1});
    }

    cout << "Falta(m) " << 151 - myMap.size() << " pomekon(s)." << endl;

    return 0;
}