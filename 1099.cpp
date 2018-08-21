#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int x, y;
		scanf("%d %d", &x, &y);
		if(x <= y){
			int total = 0;
			for(int i = x+1; i < y; i++){
				if(i % 2 == 1){
					total += i;
				}
			}
			printf("%d\n", total);
		}else{
			int total = 0;
			for(int i = y+1; i < x; i++){
				if(i % 2 == 1){
					total += i;
				}
			}
			printf("%d\n", total);
		}
	}

	return 0;
}