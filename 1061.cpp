#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int d,d1,d2,h,m,s,h1,h2,m1,m2,s1,s2,soma,resto;
	

	scanf("Dia %d\n",&d1);
	scanf("%d : %d : %d\n",&h1,&m1,&s1);
	scanf("Dia %d\n",&d2);
	scanf("%d : %d : %d",&h2,&m2,&s2);

	d1 = d1*86400 + h1*3600 + m1*60 + s1;
	d2 = d2*86400 + h2*3600 + m2*60 + s2;
	
	soma = d2-d1;
	
	d = soma/86400;
	resto = soma%86400;
	h = resto/3600;
	resto = resto%3600;
	m = resto/60;
	resto = resto%60;
	s = resto;

	cout << d << " dia(s)" << endl;
	cout << h << " hora(s)" << endl;
	cout << m << " minuto(s)" << endl;
	cout << s << " segundo(s)" << endl;


	return 0;
}
