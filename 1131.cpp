#include <iostream>

using namespace std;

int main() {
    int g,i,qt=0,saida=1,empate=0,vi=0,vg=0;

    while(saida == 1){
        qt++;
        cin >> i >> g;
        if(i > g){
            vi++;
        }else
        if(i == g){
            empate++;
        }else{
            vg++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> saida;
    }
    cout << qt << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << empate << endl;
    if(vi > vg){
        cout << "Inter venceu mais" << endl;
    }else
    if(vi < vg){
        cout << "Gremio venceu mais" << endl;
    }else
    if(vi == vg){
        cout << "Nao houve vencedor" << endl;
    }


    return 0;
}
