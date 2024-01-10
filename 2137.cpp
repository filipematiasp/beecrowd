#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int qtd, cod[1000], n;

    while(cin >> qtd){
        for (size_t i = 0; i < qtd; i++){
           cin >> cod[i];
        }

        n = sizeof(cod) / sizeof(cod[0]);

        sort(cod, cod + n);

        cout << sizeof(cod) / sizeof(cod[0]);

        // for (size_t i = 0; i < sizeof(cod); i++){
        //     /* code */
        // }
        
                
        

    }


    return 0;
}