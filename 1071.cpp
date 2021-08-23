#include <iostream>

using namespace std;

int main(){
	int i,x,y,soma=0;
	
	cin >> x;
	cin >> y;

	if(y < x){
		swap(x,y);
	}

	for(i=x+1; i < y; i++){
		if(i%2 != 0){
			soma += i;		
		}
	}
	cout << soma << endl;
	
	return 0;
}
