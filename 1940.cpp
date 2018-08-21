#include <bits/stdc++.h>
#define MAX 510
using namespace std;

int jog[MAX];

int main(){

	int j, r;
	int i, pt;
	int maior = 0, maiorI;
	
	scanf("%d %d", &j, &r);

	for(i = 0; i < j*r; i++){
		scanf("%d", &pt);
		jog[i%j] += pt;
	}



	for(i = 0; i < j; i++){
		if(jog[i] >= maior){
			maior = jog[i];
			maiorI = i;
		}
	}
	
	 printf("%d\n", maiorI+1);



	return 0;
}