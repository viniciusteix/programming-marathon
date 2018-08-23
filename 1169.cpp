#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		unsigned long long int total = 1;
		unsigned long long int res = 0;
		for(int i = 0; i < n; i++){
			total += pow(2,i);
			long long int div = total / 12000;
			if(div > 0){
				res += div;
				total = total % 12000;
			}
		}
		cout << res << " kg" << endl;
	}

	return 0;
}