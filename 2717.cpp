#include <iostream>
 
using namespace std;
 
int main() {
 
    int exp, a,b;

    cin >> exp;
    cin >> a >> b;

    a+b <= exp ? cout << "Farei hoje!" << endl : cout << "Deixa para amanha!" << endl;
 
    return 0;
}