#include <iostream>

using namespace std;

int main() {
    int qt,v,i,x;

    while( (scanf("%d",&qt)) != EOF ){
        x = 0;
        for(i=0;i<qt;i++){
            cin >> v;
            if(v > x)
                x=v;
        }
        if(x<10)cout << 1 << endl;
        else if(x >= 10 && x < 20)cout << 2 << endl;
        else cout << 3 << endl;
    }

    return 0;
}
