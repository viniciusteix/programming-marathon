#include <bits/stdc++.h>

using namespace std;

int josephus(int n, int k){
	if(n == 1) return 1;
	else return (josephus(n - 1, k) + k-1) % n + 1;
}

int main(){
	int t;
	scanf("%d", &t);
	int count = 1;
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		int res = josephus(n,m);
		printf("Case %d: %d\n", count, res);
		count++;
	}

	return 0;
}