#include <iostream>
#include <string.h>


using namespace std;

int main() {
    long long int i,qt,x,y,soma;
    char nome1[20],nome2[20],par[4]="PAR",impar[6]="IMPAR",entrada1[6],entrada2[6];

    cin >> qt;
    for(i=0;i<qt;i++){
    	cin >> nome1 >> entrada1 >> nome2 >> entrada2;
    	cin >> x >> y;
    	soma = x+y;
    	if(soma%2 == 0){
    		if(strcmp(entrada1,par)==0){
    			cout << nome1 << endl;
    		}else
    			cout << nome2 << endl;
    	}
    	if(soma%2 != 0){
    		if(strcmp(entrada2,impar)==0){
    			cout << nome2 << endl;
    		}else
    			cout << nome1 << endl;
    	}
    }



    return 0;   
}