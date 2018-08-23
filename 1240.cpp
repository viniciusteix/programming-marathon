#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;

		if(b.size() > a.size()){
			cout << "nao encaixa" << endl;
		}else{
			int idx = 0;
			int s_a = a.size();
			int s_b = b.size();
			bool flag = true;
			for(int i = s_a-s_b; i < s_a; i++){
				if(a[i] != b[idx]){
					flag = false;
					break;
				}
				idx++;
			}
			if(flag) cout << "encaixa" << endl;
			else cout << "nao encaixa" << endl;
		}
	}

	return 0;
}