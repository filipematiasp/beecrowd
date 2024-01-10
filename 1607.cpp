#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int qtd, sum;
    char first[10000], second[10000];

    cin >> qtd;

    for(int j = 0; j < qtd; j++){

        cin >> first >> second;
        sum = 0;

        for (size_t i = 0; i < strlen(first); i++){
            if (first[i] > second[i]){
                sum += 26 - (first[i] - second[i]);
                // cout << 26 - (first[i] - second[i]) << endl;
            }

            if(first[i] < second[i]){
                sum += second[i] - first[i];
                // cout << second[i] - first[i] << endl;
            }
            
        }
        cout << sum << endl;
    
    }
    
    return 0;
}