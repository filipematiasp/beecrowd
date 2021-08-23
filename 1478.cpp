#include <iostream>

using namespace std;

int main() {
    int X[100][100],i,j,qt,num,num2,pos;

    cin >> qt;
    while(qt != 0){
        pos = -1;
        for(i=0;i<qt;i++){
            num = 1;
            pos++;
            num2 = 2;
            for(j=i-1;j>=0;j--){
                X[i][j] = num2;
                num2++;
            }
            for(j=pos;j<qt;j++){
                X[i][j]= num;
                num++;
            }
            for(j=0;j<qt;j++){
                if(j == 0){
                    printf("%3d",X[i][j]);
                }else
                    printf(" %3d",X[i][j]);
            }
            cout << endl;
        }
        cout << endl;
        cin >> qt;
    }

    return 0;
}
