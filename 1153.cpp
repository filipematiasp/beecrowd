#include <iostream>

using namespace std;

int main() {
    int soma=1,i,n;

    cin >> n;

    for(i=n; i>0; i--){
        soma = i * soma;
    }
    cout << soma << endl;

    return 0;
}
