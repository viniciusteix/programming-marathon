#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		vector<int> v;
		cin >> n;
		double media;
		int total = 0;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
			total += x;
		}
		media = total / (n*1.0);
		int count = 0;
		for(int i = 0; i < n; i++){
			if(v[i] > media) count++;
		}



		double res = (count * 1.0) / n;
		res = res * 100;
		printf("%.3lf%%\n", res);
	}

	return 0;
}