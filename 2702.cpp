#include <iostream>
 
using namespace std;
 
int main() {
 
    int Ca,Ba,Pa,Cr,Br,Pr,total=0;

    cin >> Ca >> Ba >> Pa;
    cin >> Cr >> Br >> Pr;

    
    if(Ca < Cr) total = Cr - Ca;
    if(Ba < Br) total += Br - Ba;
    if(Pa < Pr) total += Pr - Pa;

    cout << total << endl;
 
    return 0;
}