#include <iostream>
#include <math.h>


using namespace std;

int main(){
    
    int qtd,x,y,r,b,c;

    cin >> qtd;

    for (int i = 0; i < qtd; i++){
        cin >> x >> y;
        r = pow((3*x), 2) + pow(y, 2);
        b = 2*(pow(x, 2)) + pow((5*y), 2);
        c = -100*x + pow(y, 3);
        
        if(r > b){
            if(r > c){
                cout << "Rafael ganhou" << endl;
            }
            else{
                cout << "Carlos ganhou" << endl;
            }
        }
        else{
            if(b > c){
                cout << "Beto ganhou" << endl;
            }
            else{
                cout << "Carlos ganhou" << endl;
            }
        }
    }
    return 0;
}

