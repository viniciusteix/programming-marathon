#include <bits/stdc++.h>

using namespace std;

int main(){
	long double value;
	while(true){
		cin >> value;
		if(value == 0) break;

		long double i = value + (value - 3.0);
		long double x = (value - i) / (value * 1.0);

		if(x < 0.0){
			x = x * -1.0;
		}

		printf("%.6Lf\n", x);
	}

	return 0;
}