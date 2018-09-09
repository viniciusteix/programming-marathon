#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l, c;

	while(cin >> n >> l >> c){
		int paginas = 1;
		vector<int> v;

		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			v.push_back((int) s.size());
		}

		int temp_c = c;
		int temp_l = l;

		for(int i = 0; i < n; i++){
			if(temp_c == c){
				temp_c -= v[i];
				continue;
			}
			if(v[i]+1 <= temp_c){
				temp_c -= v[i]+1;
			}else{
				temp_c = c;
				temp_l--;
				i--;
				if(temp_l == 0){
					temp_l = l;
					paginas++;
				}
			}
		}

		cout << paginas << endl;
	}

	return 0;
}