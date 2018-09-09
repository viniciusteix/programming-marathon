#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){

		vector<int> v1, v2;

		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v1.push_back(x);
		}

		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v2.push_back(x);
		}

		int res = 0;
		for(int i = 0; i < n; i++){
			if(v1[i] == v2[i]) continue;
			for(int j = i; j < n; j++){
				if(v1[i] == v2[j]){
					int idx = j;
					while(idx != i){
						iter_swap(v2.begin()+idx-1,v2.begin()+idx);
						res++;
						idx--;
					}
					break;
				}
			}
		}

		cout << res << endl;
	}

	return 0;
}