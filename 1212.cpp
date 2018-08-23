#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;

	while(true){
		cin >> a >> b;
		
		if(a.size() == 1 && b.size() == 1 && a[0] == '0' && b[0] == '0') break;

		int s_a = a.size();
		int s_b = b.size();

		int total = 0;
		int dig_a;
		int dig_b;
		int dig = 0;
		int temp;

		if(s_a < s_b){
			int idx_a = s_a-1;
			int idx_b = s_b-1;

			while(idx_a >= 0){
				dig_a = a[idx_a] - '0';
				dig_b = b[idx_b] - '0';

				temp = dig_a + dig_b + dig;

				if(temp >= 10){
					total++;
					dig = 1;
				}else{
					dig = 0;
				}

				idx_a--;
				idx_b--;
			}
			while(idx_b >= 0 && dig > 0){
				dig_b = b[idx_b] - '0';
				temp = dig_b + dig;
				if(temp >= 10) {
					total++;
					dig = 1;
				}else{
					dig = 0;
				}
				idx_b--;
			}
		}else if(s_b < s_a){
			int idx_a = s_a-1;
			int idx_b = s_b-1;

			while(idx_b >= 0){
				dig_a = a[idx_a] - '0';
				dig_b = b[idx_b] - '0';

				temp = dig_a + dig_b + dig;

				if(temp >= 10){
					total++;
					dig = 1;
				}else{
					dig = 0;
				}

				idx_a--;
				idx_b--;
			}
			while(idx_a >= 0 && dig > 0){
				dig_a = a[idx_a] - '0';
				temp = dig_a + dig;
				if(temp >= 10) {
					total++;
					dig = 1;
				}else{
					dig = 0;
				}
				idx_a--;
			}
		}else{
			for(int i = s_b-1; i >= 0; i--){
				dig_a = a[i] - '0';
				dig_b = b[i] - '0';
				temp = dig_a + dig_b + dig;
				if(temp >= 10) {
					total++;
					dig = 1;
				}else{
					dig = 0;
				}
			}
		}
		if(total == 0){
			cout << "No carry operation." << endl;
		}else if(total == 1){
			cout << total << " carry operation." << endl;
		}else{
			cout << total << " carry operations." << endl;
		}

	}

	return 0;
}