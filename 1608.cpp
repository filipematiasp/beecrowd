#include <iostream>

using namespace std;

int main(){

    int qtd, dinMaria, qtdIngredientesExiste, qtdIngreBolo, qtdBolos, totalIngreBolo, max, indice, sumTotal;
    int dinBolos[100];

    cin >> qtd;

    for (int i = 0; i < qtd; i++){

        cin >> dinMaria >> qtdIngredientesExiste >> qtdBolos;

        for (int i = 0; i < qtdIngredientesExiste; i++){
            cin >> dinBolos[i];
        }

        max = 0;
        for (int i = 0; i < qtdBolos; i++){
            sumTotal = 0;
            cin >> totalIngreBolo;
            for (int i = 0; i < totalIngreBolo; i++){
                cin >> indice >> qtdIngreBolo;
                sumTotal += dinBolos[indice] * qtdIngreBolo;
            }

            if ((dinMaria / sumTotal) > max){
                max = dinMaria / sumTotal;
            }

        }

        cout << max << endl;

    }

    return 0;
}