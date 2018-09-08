#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		int dif = (n-1) / 2;
		int aux = dif;
		for(int i = 1; i <= n; i+=2){
			for(int j = 0; j < dif; j++){
				cout << " ";
			}
			for(int j = 0; j < i; j++){
				cout << "*";
			}
			cout << endl;
			dif--;
		}
		for(int i = 0; i < aux; i++){
			cout << " ";
		}
		cout << "*" << endl;
		for(int i = 0; i < aux-1; i++){
			cout << " ";
		}
		cout << "***" << endl;
		cout << endl;
	}

	return 0;
}