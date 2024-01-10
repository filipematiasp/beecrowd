#include <iostream>

using namespace std;

int main(){
    
    int qtd,L,C;
    int count = 0;

    cin >> qtd;

    for (int i = 0; i < qtd; i++)
    {
        cin >> L >> C;
        if(L > C){
            count += C;
        }
    }

    cout << count << endl;
    


    return 0;
}