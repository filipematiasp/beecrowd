#include <iostream>
#include <cstring>

using namespace std;

int main (){
    char a[15],b[15],c[15];
    char carnivoro[] = "carnivoro";
    char ave[] = "ave";
    char onivoro[] = "onivoro";
    char mamifero[] = "mamifero";
    char herbivoro[] = "herbivoro";
    char hematofago[] = "hematofago";
    char anelideo[] = "anelideo";
    char inseto[] = "inseto";

    cin >> a;
    cin >> b;
    cin >> c;

    if(!strcmp(c,carnivoro) ){
        cout << "aguia\n";
    }
    if(!strcmp(b,ave) && !strcmp(c,onivoro)){
        cout << "pomba\n";
    }
    if(!strcmp(b,mamifero) && !strcmp(c,onivoro)){
        cout << "homem\n";
    }
    if(!strcmp(b,mamifero) && !strcmp(c,herbivoro)){
        cout << "vaca\n";
    }

    if(!strcmp(b,inseto) && !strcmp(c,hematofago)){
        cout << "pulga\n";
    }
    if(!strcmp(b,inseto) && !strcmp(c,herbivoro)){
        cout << "lagarta\n";
    }
    if(!strcmp(b,anelideo) && !strcmp(c,hematofago)){
        cout << "sanguessuga\n";
    }
    if(!strcmp(b,anelideo) && !strcmp(c,onivoro)){
        cout << "minhoca\n";
    }

    return 0;
}
