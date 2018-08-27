#include <bits/stdc++.h>

using namespace std;

int main(){
	int d, vf, vg;
	int c = pow(12,2);
	while(cin >> d >> vf >> vg){
		long double a = sqrt(pow(d,2) + c);
		long double df = 12 / (vf*1.0);
		long double dg = a / (vg*1.0);
		
		if(df < dg){
			cout << "N" << endl;
		}else{
			cout << "S" << endl;
		}
	}

	return 0;
}