#include <iostream>

using namespace std;

int main() {
    int qt,i,num;
    string x;

    cin >> qt;
    for(i=0;i<qt;i++){
        cin >> x >> num;
        if(x == "Thor") cout << "Y" << endl;else cout << "N" << endl;

    }
    return 0;
}
