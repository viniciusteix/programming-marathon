#include <bits/stdc++.h>

using namespace std;

int rafael(int x, int y){
	return pow(3*x,2) + pow(y,2);
}

int beto(int x, int y){
	return 2*pow(x,2) + pow(5*y,2);
}

int carlos(int x, int y){
	return (-100 * x) + pow(y,3);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		int r = rafael(x,y);
		int b = beto(x,y);
		int c = carlos(x,y);

		if(r > b && r > c){
			cout << "Rafael ganhou" << endl;
		}
		if(b > r && b > c){
			cout << "Beto ganhou" << endl;
		}
		if(c > r && c > b){
			cout << "Carlos ganhou" << endl;
		}
	}
	return 0;
}