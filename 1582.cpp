#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
  if( b < a ){
    a %= b;
    if( a == 0 ){
      return b;
    }
  }
  while( a != 0 ){
    b %= a;
    if( b == 0 ){
      return a;
    }
    a %= b;
  }
  return b;
}

bool pitagoras(int a, int b, int c){
	int a2 = pow(a,2);
	int b2 = pow(b,2);
	int c2 = pow(c,2);

	if(a2 == b2+c2 || b2 == a2+c2 || c2 == a2+b2) return true;
	return false;
}

int main(){
	int a, b, c;

	while(cin >> a >> b >> c){
		bool flag = pitagoras(a,b,c);
		if(flag){
			if(mdc(a,b) == 1 && mdc(a,c) == 1 && mdc(b,c) == 1){
				cout << "tripla pitagorica primitiva" << endl;
			}else{
				cout << "tripla pitagorica" << endl;
			}
		}else{
			cout << "tripla" << endl;
		}
	}

	return 0;
}