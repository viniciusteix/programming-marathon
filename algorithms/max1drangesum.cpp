#include <bits/stdc++.h>

using namespace std;

#define MAX 101

int v[MAX];

int solve(int n){
	int sum = 0, res = 0;
	for(int i = 0; i < n; i++){
		sum += v[i];
		res = max(res,sum);
		if(sum < 0) sum = 0;
	}
	return res;
}

int main(){

	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v[i] = x;
	}

	int res = solve(n);
	cout << res << endl;

	return 0;
}