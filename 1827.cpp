#include <iostream>

using namespace std;

int main() {
    int tam,qt,i,j,contador;

    while( (scanf("%d",&qt)) != EOF ){
        tam = qt/3;
        contador = qt-tam*2;
        for(i=0; i<qt; i++){
            for(j=0; j<qt; j++){

                if(i>=tam && i<(contador+tam)){
                    if(j>=tam && j<(contador+tam)){
                        if(i==qt/2 && j==qt/2){
                            cout << 4;
                        }else
                            cout << 1;
                    }else
                        cout << 0;
                }else
                if(i-j==0){
                   cout << 2;
                }else
                if(i+j==qt-1){
                    cout << 3;
                }else
                    cout << 0;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
