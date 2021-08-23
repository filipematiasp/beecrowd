#include <iostream>

using namespace std;

int main(){
    int qt,i,flag=1;
    long long x,teste = 2;

    cin >> qt;

    for(i=0; i<qt; i++){
        cin >> x;
        teste = 2;
        flag = 1;

        while (teste < x){
            if(x%teste == 0){
                flag = 0;
                break;
            }
            teste = teste + 1;
        }

        if(flag == 1){
            cout << x << " eh primo" << endl;
        }else{
            cout << x << " nao eh primo" << endl;
        }
    }

    return 0;
}
