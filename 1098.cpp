#include <iostream>

using namespace std;

int main() {
    double i=0.0,j=1.0;

    while(i < 2.0){
        j = 1;
        cout << "I=" << i << " J=" << j+i << endl;
        j++;
        cout << "I=" << i << " J=" << j+i << endl;
        j++;
        cout << "I=" << i << " J=" << j+i << endl;
        i += 0.2;

    }

    return 0;
}
