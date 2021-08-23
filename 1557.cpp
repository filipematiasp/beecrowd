#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,j,qt,aux1,aux2,car;
    char buffer[10];

    while(true){
        aux1 = aux2 = 1;
        cin >> qt;
        int X[qt][qt];
        if(qt==0) break;
        for(i=0;i<qt;i++){
            for(j=0;j<qt;j++){
                X[i][j] = aux1;
                aux1 = aux1 *2;
            }
            aux1 = aux2*2;
            aux2 = aux1;
        }

        car = sprintf(buffer,"%d",X[qt-1][qt-1]);

        for(i=0;i<qt;i++){
            for(j=0;j<qt;j++){

                if(j==0){
                    cout << setw(car) << X[i][j];
                }else
                    cout << " " << setw(car) << X[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
