#include <iostream>

using namespace std;

int main()
{

    int tam, total=0, recorde=0;
    char matriz[100][100];
    cin >> tam;

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
        cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < tam; i++){
        //par
        if(i % 2 == 0){
            for(int j = 0; j < tam; j++){
                if(matriz[i][j] == 'o'){
                    total++;
                    if(total > recorde){
                        recorde = total;
                    }
                }
                if(matriz[i][j] == 'A'){
                    total=0;
                }
            }
        }
        //impar
        else{
           for(int j = tam-1; j >= 0; j--){
                if(matriz[i][j] == 'o'){
                    total++;
                    if(total > recorde){
                        recorde = total;
                    }
                }
                if(matriz[i][j] == 'A'){
                    total=0;
                }
            } 
        }
    }

    cout << recorde << endl;

    return 0;
}