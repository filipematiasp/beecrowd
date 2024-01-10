#include <iostream>

using namespace std;


unsigned long long int factorial(int n) {
  if (n > 1) 
    return factorial(n - 1) * n;
  return 1;
}


int main(){
    
    int x, y;
    unsigned long long int sum;

    while (cin >> x >> y){
        sum = factorial(x) + factorial(y);
        cout << sum << endl;
    }
    
    return 0;
}

