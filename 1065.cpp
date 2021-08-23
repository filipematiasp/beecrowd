#include <iostream>

using namespace std;

int main(){
	double i,media,soma,x,qt;
	
	for(i=0; i<6; i++){
		cin >> x;
		if(x > 0){
			qt++;
			soma += x;	
		}
	}
	media = soma / qt;	
	
	cout<< qt << " valores positivos" << endl;
	cout << fixed;
	cout.precision(1);
	cout << media << endl;
	

	return 0;
}
