#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<double> v;
	double a, b, c;
	int i = 3;
	while(i--){
		double x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	a = v[2];
	b = v[1];
	c = v[0];

	if(a >= b + c){
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}
	if((a*a) == (b*b) + (c*c)){
		cout << "TRIANGULO RETANGULO" << endl;
	}
	if((a*a) > (b*b) + (c*c)){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	if((a*a) < (b*b) + (c*c)){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	if(a == b && b == c){
		cout << "TRIANGULO EQUILATERO" << endl;
	}else if(a == b || a == c || b == c){
		cout << "TRIANGULO ISOSCELES" << endl;
	}

	return 0;
}