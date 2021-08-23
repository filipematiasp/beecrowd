#include <iostream>

using namespace std;

int main() {

    double M[12][12],soma=0,media=0,valor;
    char c;
    int i,j;

    cin >> c;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin >> M[i][j];
            if(j+i > 11 && i < j){
                soma = soma + M[i][j];
                media = media + M[i][j];
            }

        }
    }
    switch(c){
        case 'S':
            valor = soma;
        break;

        case 'M':
            media = media/30;
            valor = media;
        break;
    }

    cout << fixed;
    cout.precision(1);
    cout << valor << endl;
    return 0;
}
