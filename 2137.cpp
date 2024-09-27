#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int qtd, cod[1000];

    while(cin >> qtd){
        for (int i = 0; i < qtd; i++){
            cin >> cod[i];
        }

        sort(cod, cod + qtd);

        for(int i = 0; i < qtd; i++){
            cout << setw(4) << setfill('0') << cod[i] << endl;
        }

    }


    return 0;
}