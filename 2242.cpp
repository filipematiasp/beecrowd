#include <iostream>
#include <string>

using namespace std;

string isPalindromo(string filtered){
    for (size_t i = 0; i < filtered.size()/2; i++){
        if(filtered[i] != filtered[filtered.size()-(i+1)]){
            return "N";
        }
    }
    return "S";

}

int main(){
    
    string sentence, filtered;
    
    cin >> sentence;

    for (size_t i = 0; i < sentence.size(); i++){
        if(
            sentence[i] == 'a' || 
            sentence[i] == 'e' || 
            sentence[i] == 'i' || 
            sentence[i] == 'o' || 
            sentence[i] == 'u'
        ){
            filtered += sentence[i];
        }
    }
    
    cout << isPalindromo(filtered) << endl;
    
   
    return 0;
}

