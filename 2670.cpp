#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, melhor = 0, atual = 0;

    cin >> a1;
    cin >> a2;
    cin >> a3;

    atual = a2*2 + a3*4;
    melhor = atual;
    atual = a1*2 + a3*2;
    if(atual < melhor) melhor = atual;
    atual = a1*4 + a2*2;
    if(atual < melhor) melhor = atual;

    cout << melhor << endl;

    return 0;
}