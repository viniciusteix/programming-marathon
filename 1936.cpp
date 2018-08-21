#include <iostream>

using namespace std;

int fatorial[] = {1,1,2,6,24,120,720,5040,40320};

int main(){
	int n, count = 0;
	cin >> n;
	for(int i = 8; i >= 0; i--){
		while(n - fatorial[i] >= 0){
			n = n - fatorial[i];
			count++;
		}
	}
	cout << count << endl;
	return 0;
}