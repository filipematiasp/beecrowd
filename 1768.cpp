#include <iostream>

using namespace std;

int main() {
    int qtd, ajuste;

    while( (scanf("%d",&qtd)) != EOF ){
        for(int i = 1; i <= qtd; i += 2){
            ajuste = (qtd - i) / 2;
            for(int j = 0; j < ajuste; j++){
                cout << " ";
            }
            for(int k = 0; k < i; k++){
                cout << "*";
            }
            cout << endl;
        }
        ajuste = (qtd - 1) / 2;
        for(int i = 0; i < ajuste; i++){
            cout << " ";
        }
        cout << "*" << endl;
        for(int i = 0; i < ajuste - 1; i++){
            cout << " ";
        }
        cout << "***" << endl << endl;;

    }

    return 0;
}
