#include <iostream>
 
using namespace std;
 
int main() {
    
    int tam, a;

    cin >> tam;

    for(int n = 0; n < tam; n++){
        cin >> a;
        cout << "resposta " << n+1 << ": " << a << endl; 
    }


 
    return 0;
}