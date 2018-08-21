#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(true){
		scanf("%d", &n);
		if(n == 0) break;
		if(n == 1) {
			printf("%d\n", n);
			continue;
		}
		for(int i = 1; i <= n-1; i++){
			printf("%d ", i);
		}
		printf("%d\n", n);
	}
}