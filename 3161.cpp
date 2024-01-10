#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    
    int M,N;
    bool fruitFind = false;
    cin >> M >> N;
    string temp;
    string * fruits = new string[M];
    string * listName = new string[N];

    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        fruits[i] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        listName[i] = temp;
    }

    for (int i = 0; i < M; i++)
    {   
        fruitFind = false;
        string fruitReverse = fruits[i];
        reverse(fruitReverse.begin(), fruitReverse.end());

        for (int j = 0; j < N; j++)
        {
            size_t found = listName[j].find(fruits[i]);
            size_t foundReverse = listName[j].find(fruitReverse);

            if (found != string::npos || foundReverse != string::npos)
            {
               
                fruitFind = true;
                break;
            }
            
        }
        
        if(fruitFind)
        {
            cout << "Sheldon come a fruta " << fruits[i] << endl;
        }
        else
        {
            cout << "Sheldon detesta a fruta " << fruits[i] << endl;
        }
        
    }

    return 0;
}

