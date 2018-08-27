#include <bits/stdc++.h>

using namespace std;

#define MAX 1001

string a, b;

int subsequencia(){
	int count = 0;
	int na = a.size();
	int nb = b.size();
	int idx = 0;
	if(na < nb){
		for(int i = 0; i < nb; i++){
			if(idx == na) break;
			if(a[idx] == b[i]){
				count++;
				idx++;
			}
			if(i == nb-1 && idx != na) {
				i = idx;
				idx++;
			}
		}
	}else{
		for(int i = 0; i < na; i++){
			if(idx == nb) break;
			if(b[idx] == a[i]){
				count++;
				idx++;
			}
			if(i == na-1 && idx != nb) {
				i = idx;
				idx++;
			}
		}
	}
	return count;
}

int main(){

	cin >> a >> b;

	int res = subsequencia();

	res = (a.size() - res) + (b.size() - res) + res;

	cout << res << endl;

	return 0;
}