#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int inst = 1;
	while(t--){
		char verdade[1000], time1[1000], time2[1000];
		scanf(" %[^\n]1000", verdade);
		scanf(" %[^\n]1000", time1);
		scanf(" %[^\n]1000", time2);
		int count1 = 0;
		int count2 = 0;
		bool flag = false;
		for(int i = 0; i < strlen(verdade); i++){
			if(verdade[i] == time1[i]) count1++;
			if(verdade[i] == time2[i]) count2++;
		}

		cout << "Instancia " << inst << endl;
		inst++;
		if(count1 > count2){
			cout << "time 1" << endl;
		}else if(count2 > count1){
			cout << "time 2" << endl;
		}else{
			for(int i = 0; i < strlen(verdade); i++){
				if(verdade[i] == time1[i] && verdade[i] != time2[i]){
					cout << "time 1" << endl;
					flag = true;
					break;
				}else if(verdade[i] != time1[i] && verdade[i] == time2[i]){
					cout << "time 2" << endl;
					flag = true;
					break;
				}
			}
			if(!flag){
				cout << "empate" << endl;
			}
		}
		cout << endl;
	}
	return 0;
}