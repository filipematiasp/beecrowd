#include <iostream>
 
using namespace std;
 
int main() {
    
    int l,c,r1,r2,rmaior,rmenor,cmaior,cmenor;

    cin >> l >> c >> r1 >> r2;

    while ( l != 0){
        if(r1 > r2){
            rmaior = r1;
            rmenor = r2;
        }else{
            rmaior = r2;
            rmenor = r1;
        }
        if(l > c){
            cmaior = l;
            cmenor = c;
        }else{
            cmaior = c;
            cmenor = l;
        }

        if(rmaior*2 > cmenor || (rmaior*2 + rmenor*2) > cmaior){
            cout << "N" << endl;
        }else{
            cout << "S" << endl;
        }




        cin >> l >> c >> r1 >> r2;
    }
       


    return 0;
}