#include <bits/stdc++.h>

using namespace std;

map<string,int> mapa;

int main(){
	string a;

	while(cin >> a){
		mapa[a] = 1;
	}

	int res = mapa.size();

	cout << res << endl;

	return 0;
}