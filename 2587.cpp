#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	while(n--){
		string a, b, c;
		cin >> a >> b >> c;

		int p1 = -1, p2 = -1;
		for(int i = 0; i < (int) c.size(); i++){
			if(c[i] == '_' && p1 == -1) p1 = i;
			else if(c[i] == '_' && p1 != -1) p2 = i;
		}

		char ap1 = a[p1];
		char ap2 = a[p2];
		char bp1 = b[p1];
		char bp2 = b[p2];

		if(ap1 == bp2 || ap2 == bp1 || (ap1 == bp1 && ap2 == bp2)) cout << "Y" << endl;
		else cout << "N" << endl;
	}

	
	return 0;
}