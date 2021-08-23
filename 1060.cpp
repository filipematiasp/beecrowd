#include <iostream>

using namespace std;

int main(){
	float i,x1,soma;
	
	for(i=0; i<6; i++){
		cin >> x1;
		if(x1>0){
			soma++;
		}
	}
	cout << soma << " valores positivos" << endl;

	return 0;
}
