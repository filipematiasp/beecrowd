#include <iostream>

using namespace std;

int main(){
    int qtd, cost, values;

    while(cin >> qtd){
        int sum = 0, prev = 0;
        cin >> cost;

        for (size_t i = 0; i < qtd; i++){
            cin >> values;
            prev = prev + (values - cost);
            if(prev < 0){
                prev = 0;
            }

            if(sum < prev){
                sum = prev;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
