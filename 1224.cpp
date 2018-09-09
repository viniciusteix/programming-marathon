#include <bits/stdc++.h>

using namespace std;

#define MAX 10010

int v[MAX];
long long int dp[MAX][2];

long long int solve(int n){
	for(int i = 0; i < n-1; i++){
		dp[i][0] = max(v[i], v[i+1]);
	}
	int atual = 0;
	int passado = 1;
	for (int k = 4; k <= n; k += 2) {
		passado = atual;
		atual = atual ^ 1;
		for (int i = 0, j = k - 1; j < n; i++, j++) {
			dp[i][atual] = max(v[i] + min(dp[i + 1][passado], dp[i + 2][passado]),
							  v[j] + min(dp[i][passado], dp[i + 1][passado]));
		}
	}
	return dp[0][atual];
}

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v[i] = x;
		}

		long long int res = solve(n);
		cout << res << endl;
	}
	return 0;
}