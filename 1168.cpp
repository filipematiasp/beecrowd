#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int qt,i,j,tam,led;
    char num[100000];

    cin >> qt;
    for(i=0;i<qt;i++){
        led = 0;
        cin >> num;
        tam = strlen(num);
        for(j=0;j<tam;j++){
            if(num[j] == '1'){
                led = led + 2;
            }else
            if(num[j] == '7'){
                led = led + 3;
            }else
            if(num[j] == '4'){
                led = led + 4;
            }else
            if(num[j] == '2' || num[j] == '3' || num[j] == '5'){
                led = led + 5;
            }else
            if(num[j] == '6' || num[j] == '9' || num[j] == '0'){
                led = led + 6;
            }else
            if(num[j] == '8'){
                led = led + 7;
            }
        }
        cout << led << " leds" << endl;
    }
    return 0;
}
