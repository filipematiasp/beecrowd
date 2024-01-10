#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    
    string sentence;
    bool upCase = true;

    while (getline(cin, sentence)){

        for (size_t i = 0; i < sentence.size(); i++){
            if(sentence[i] != ' '){
                if (upCase){
                    sentence[i] = toupper(sentence[i]);
                    upCase = false;
                }
                else{
                    sentence[i] = tolower(sentence[i]);
                    upCase = true;
                }
                
            }

        }
        
        
        cout << sentence << endl;
        upCase = true;
    }
    
    return 0;
}

