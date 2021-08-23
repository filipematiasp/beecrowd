#include <iostream>

using namespace std;

int main() {
    int i,j,qt;

    while((scanf("%d",&qt) != EOF )){
        for(i=0; i<qt; i++){
            for(j=0; j<qt; j++){
                if(i+j+1 == qt){
                    cout << 2;
                }else
                if(i==j){
                    cout << 1;
                }else{
                    cout << 3;
                }
            }
            cout <<  endl;
        }
    }
    return 0;
}
