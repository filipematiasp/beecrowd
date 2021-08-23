#include <iostream>

using namespace std;

int main() {
    int i,qt,c=0,r=0,s=0,x;
    char tipo;
    float total;

    cin >> qt;
    for(i=0;i<qt;i++){
        cin >> x >> tipo;
        if(tipo == 'C'){
            c += x;
        }else
        if(tipo == 'R'){
            r += x;
        }else
        if(tipo == 'S'){
            s += x;
        }
    }
    total = c+r+s;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout<<fixed;
    cout.precision(2);
    cout << "Percentual de coelhos: " << (c*100)/total << " %" << endl;
    cout << "Percentual de ratos: " << (r*100)/total << " %" << endl;
    cout << "Percentual de sapos: " << (s*100)/total << " %" << endl;

    return 0;
}
