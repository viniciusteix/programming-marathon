#include <bits/stdc++.h>

using namespace std;

#define MAX 200100

vector<int> v;
int n, c;

int res[MAX];

int main(){
	cin >> n >> c;
	v.push_back(0);
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
		res[i] = -1;
	}
	res[n] = -1;
	res[0] = 0;

	for(int i = 1; i < n; i++){
		res[i] = res[i-1];
		for(int j = 0; j < i; j++){
			res[i] = max(res[i],v[i]-v[j]-c+res[j]);
		}
	}



	cout << res[n-1] << endl;

	return 0;
}