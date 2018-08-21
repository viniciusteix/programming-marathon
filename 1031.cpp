#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(true){
		scanf("%d", &n);
		if(n == 0) break;

		int v[n+1];

		

		for(int i = 1; i < 1000; i++){
			for(int i = 0; i <= n; i++){
				v[i] = 0;
			}

			int count = 0;
			int idx = 1;
			bool flag = false;
			for(int k = 1; k <= n; k++){
				int temp = 0;
				if(count == i) count = 0;

				if(idx == 13) {
					bool flag_ = true;
					for(int l = 1; l <= n; l++){
						if(v[l] == 0 && l != 13) flag_ = false;
					}
					if(flag_){
						flag = true;
						cout << i << endl;
					}
					break;
				}

				v[idx] = 1;
				while(temp < i){
					idx++;
					idx = idx % (n+1);
					if(idx == 0) idx = 1;
					if(v[idx] == 0){
						temp++;
					}
				}
				count++;
			}
			if(flag) break;
		}
	}

	return 0;
}