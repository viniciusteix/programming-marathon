#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	scanf("%lld", &n);
	for(long long int i = 1; i <= n; i++){
		long long int res = i;
		for(int k = 0; k < 2; k++){
			for(long long int j = 1; j <= 3; j++){
				if(j == 1) printf("%lld ", i);
				if(j == 2) printf("%lld ", (res * i) + k);
				if(j == 3) printf("%lld\n", (res * i * i) + k);
			}
		}
	}

	return 0;
}