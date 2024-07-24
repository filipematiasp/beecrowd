#include <iostream>

using namespace std;

int cont;

int fibonacci(int n){
    cont++;
    if(n <= 1){
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int qtd, fib, valor;

    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> fib;
        cont = 0;
        valor = fibonacci(fib);
        cout << "fib(" << fib << ") = " << cont - 1 << " calls = " << valor << endl;
    }

    return 0;
}
