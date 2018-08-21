#include <bits/stdc++.h>

using namespace std;

#define MAX 3501

vector<int> primos;

int ct = 0;

int josephus(int n, int k){
	if(n == 1) return 1;
	k = primos[ct++];
	return ((josephus(n-1, k) + k-1) % n) + 1;
}

bool ehprimo(int n){
	int raiz = sqrt(n);
	for(int i = 2; i <= raiz; i++){
		if(n % i == 0) return true;
	}
	return false;
}

int main(){

	int count = 0;
	int i = 2;

	for (int i = 2; i <= 32621; i++) {
        if (i > 3) {
            bool isPrime = true;

            for (int j = sqrt(i); j >= 2; j--) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                primos.push_back(i);
            }
        } else {
            primos.push_back(i);
        }
    }

	int n;

	while(true){
		cin >> n;
		if(n == 0) break;
		ct = 0;
		int res = josephus(n,0);
		cout << res << endl;
	}

	return 0;
}