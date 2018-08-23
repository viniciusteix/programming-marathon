#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int c = 1;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		int res = v[n/2];
		cout << "Case " << c << ": " << res << endl;
		c++;
	}

	return 0;
}