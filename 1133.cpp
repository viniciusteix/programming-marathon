#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	scanf("%d %d", &x, &y);

	if(x <= y){
		for(int i = x+1; i < y; i++){
			int mod = i % 5;
			if(mod == 3 || mod == 2){
				printf("%d\n", i);
			}
		}
	}else{
		for(int i = y+1; i < x; i++){
			int mod = i % 5;
			if(mod == 3 || mod == 2){
				printf("%d\n", i);
			}
		}
	}

	return 0;
}