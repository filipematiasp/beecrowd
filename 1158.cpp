#include <iostream>

using namespace std;

int main() {
    int qt,x,y,i,j,soma;

    cin >> qt;

    for(i=0; i<qt; i++){
        cin >> x >> y;
        soma = 0;
        for(j=0; j<y; j++){
            if(x%2 == 0){
                x++;
            }
            soma = soma + x;
            x = x + 2;
        }
        cout << soma << endl;
    }

    return 0;
}
