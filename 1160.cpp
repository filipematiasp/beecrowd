#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i,qt,tempo;
    long long PA,PB;
    float G1,G2;

    cin >> qt;

    for(i=0; i<qt; i++){
        tempo=0;
        cin >> PA >> PB >> G1 >> G2;
        while(PB >= PA && tempo < 101){
            PB = PB + floor(PB * (G2/100));
            PA = PA + floor(PA * (G1/100));
            tempo++;
            //cout << "PA= " << PA << " PB= "<< PB << endl;
        }
        if(tempo>100){
            cout << "Mais de 1 seculo." << endl;
        }else{
            cout << tempo << " anos." << endl;
        }

    }

    return 0;
}
