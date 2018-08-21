#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	int total = 0;
	if(x <= y){
		for(int i = x; i <= y; i++){
			if(i % 13 != 0) total += i;
		}
	}else{
		for(int i = y; i <= x; i++){
			if(i % 13 != 0) total += i;
		}
	}

	printf("%d\n", total);

	return 0;
}