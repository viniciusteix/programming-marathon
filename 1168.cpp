#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int v[10] = {6,2,5,5,4,5,6,3,7,6};
	while(t--){
		string s;
		cin >> s;
		int total = 0;
		for(int i = 0; i < (int) s.size(); i++){
			total += v[s[i]-'0'];
		}
		cout << total << " leds" << endl;
	}

	return 0;
}