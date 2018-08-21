#include <bits/stdc++.h>

using namespace std;

bool comparator(int a, int b){
	if(a > b) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, c, m;
		cin >> n >> c >> m;
		vector<int> v;
		for(int i = 0; i < m; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}

		sort(v.begin(), v.end(), comparator);

		int total = 0;
		int maximo = 0;
		int count = 0;

		int qtd = m/c;

		if(qtd == 0) qtd = 1;

		bool flag = false;

		for(int i = 0; i < m; i+=c){
			maximo = 0;
			for(int j = i; j < i+c; j++){
				if(v[j] > maximo) maximo = v[j];
				if(j == m-1){
					flag = true;
					break;
				}
			}
			total += (2*maximo);
			if(flag){
				break;
			}
		}

		cout << total << endl;
	}
	return 0;
}