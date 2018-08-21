#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	while(true){
		scanf("%d %d", &x, &y);

		if(x <= 0 || y <= 0) break;

		if(x <= y){
			int total = 0;
			for(int i = x; i <= y; i++){
				printf("%d ", i);
				total += i;
			}
			printf("Sum=%d\n", total);
		}else{
			int total = 0;
			for(int i = y; i <= x; i++){
				printf("%d ", i);
				total += i;
			}
			printf("Sum=%d\n", total);
		}
	}
}