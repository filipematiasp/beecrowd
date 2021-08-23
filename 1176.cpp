#include <iostream>

using namespace std;

int main() {
    unsigned long long aux,vet[60];
    int i,j,qt,x;

    cin >> qt;
    vet[0]=0;
    vet[1]=1;
    for(j=2;j<61;j++){
            aux = vet[j-2] + vet[j-1];
            vet[j] = aux;
        }
    for(i=0;i<qt;i++){
        cin >> x;
        cout << "Fib(" << x << ") = "<< vet[x] << endl;
    }

    return 0;
}
