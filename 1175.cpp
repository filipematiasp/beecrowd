#include <iostream>

using namespace std;

int main() {
    float N[20],aux;
    int i;

    for(i=0;i<20;i++){
        cin >> N[i];
    }

    for(i=0;i<10;i++){
        swap(N[i],N[19-i]);
    }

    for(i=0;i<20;i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
