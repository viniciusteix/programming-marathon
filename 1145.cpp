#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	for(int i = 1; i <= y; i++){
		if(i == y) {
			printf("%d\n", i);
			break;
		}
		if(i % x == 0) printf("%d\n", i);
		else printf("%d ", i);
	}

	return 0;
}