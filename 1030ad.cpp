#include <iostream>

using namespace std;

int josephus(long long int n, long long int k){
    if(n==1){
        return 1;
    }else
        return(josephus(n-1,k) + k-1) % n+1;
}

int main(){
    long long i,qt;
    long long int n,k;
    cin >> qt;

    for(i=0; i<qt; i++){
        cin >> n >> k;
        cout << "Case "<< i+1 <<": " <<josephus(n,k) << endl;
    }
    return 0;
}


