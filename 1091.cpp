#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	while(true){
		cin >> k;

		if(k == 0) break;

		int x, y;
		cin >> x >> y;

		for(int i = 0; i < k; i++){
			int a, b;
			cin >> a >> b;

			if(a > x){
				if(b > y){
					cout << "NE" << endl;
				}else if(b < y){
					cout << "SE" << endl;
				}else{
					cout << "divisa" << endl;
				}
			}else if(a < x){
				if(b > y){
					cout << "NO" << endl;
				}else if(b < y){
					cout << "SO" << endl;
				}else{
					cout << "divisa" << endl;	
				}
			}else{
				cout << "divisa" << endl;
			}
		}

	}


	return 0;
}