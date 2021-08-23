#include <iostream>

using namespace std;

int main() {
    int qt,i,num,posA,numA;

    cin >> qt;
    cin >> numA;
    posA = 1;
    for(i=2;i<=qt;i++){
        cin >> num;
        if(num < numA){
            numA = num;
            posA = i;
        }
    }
    cout << posA << endl;
    return 0;
}
