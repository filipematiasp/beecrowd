#include <iostream>
#include <string>


using namespace std;

int main() {
    int soma=0,cont=3;
    string a=("--*"),b=("-*-"),c=("*--"),caw=("caw caw"), entrada;

    while(cont > 0){
	    getline(cin,entrada);
	    
	    if(entrada == "--*"){
	    	soma = soma + 1; 
	    }else
	    if(entrada == "-*-"){
	    	soma = soma + 2; 
	    }else
	    if(entrada == "-**"){
	    	soma = soma + 3; 
	    }else
	    if(entrada == "*--"){
	    	soma = soma + 4; 
	    }else
	    if(entrada == "*-*"){
	    	soma = soma + 5; 
	    }else
	    if(entrada == "**-"){
	    	soma = soma + 6; 
	    }else
	    if(entrada == "***"){
	    	soma = soma + 7; 
	    }


	    if(entrada == "caw caw"){
	 	   cout << soma  << endl;
	 	   cont--;
	 	   soma = 0;
	 	}	  
	}
    return 0;   
}