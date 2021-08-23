#include <iostream>


using namespace std;

int main() {
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    if(abs(b-c) < a && a < b+c &&
       abs(a-c) < b && b < a+c &&
       abs(a-b) < c && c < a+b){
    	cout << "S" << endl;
    }else
    if(abs(b-c) < d && d < b+c &&
       abs(d-c) < b && b < d+c &&
       abs(d-b) < c && c < d+b){
    	cout << "S" << endl;
    }else
    if(abs(b-d) < a && a < b+d &&
       abs(a-d) < b && b < a+d &&
       abs(a-b) < d && d < a+b){
    	cout << "S" << endl;
    }else
    if(abs(d-c) < a && a < d+c &&
       abs(a-c) < d && d < a+c &&
       abs(a-d) < c && c < a+d){
    	cout << "S" << endl;
    }else{
    	cout << "N" << endl;
    }
	
    return 0;   
}