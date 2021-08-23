#include <iostream>

using namespace std;

int main() {
    int qt,i;
    string x1,x2;


    cin >> qt;
    for(i=0;i<qt;i++){
        cin >> x1 >> x2;
        if(x1==x2){
            cout <<"Caso #" <<i+1 <<": De novo!" << endl;
        }else
        if(x1=="tesoura" && (x2=="papel"||x2=="lagarto")){
            cout <<"Caso #" <<i+1 <<": Bazinga!" << endl;
        }else
        if(x1=="papel" && (x2=="pedra"||x2=="Spock")){
            cout <<"Caso #" <<i+1 <<": Bazinga!" << endl;
        }else
        if(x1=="pedra" && (x2=="lagarto"||x2=="tesoura")){
            cout <<"Caso #" <<i+1 <<": Bazinga!" << endl;
        }else
        if(x1=="lagarto" && (x2=="Spock"||x2=="papel")){
            cout <<"Caso #" <<i+1 <<": Bazinga!" << endl;
        }else
        if(x1=="Spock" && (x2=="tesoura"||x2=="pedra")){
            cout <<"Caso #" <<i+1 <<": Bazinga!" << endl;
        }else cout <<"Caso #"<<i+1<<": Raj trapaceou!" << endl;


    }
    return 0;
}
