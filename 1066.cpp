#include <iostream>

using namespace std;

int main(){
	int i,par=0,impar=0,posi=0,neg=0,x;
	
	for(i=0; i<5; i++){
		cin >> x;
		if(x%2 == 0){
			par++;
		}if(x%2 != 0){	
			impar++;
		}
		if(x>0){
			posi++;
		}if(x<0){
			neg++;
		}

	}
	
	cout<< par << " valor(es) par(es)" << endl;
	cout<< impar << " valor(es) impar(es)" << endl;
	cout<< posi << " valor(es) positivo(s)" << endl;
	cout<< neg << " valor(es) negativo(s)" << endl;
	

	return 0;
}
