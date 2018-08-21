#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	int gasolina = 0;
	int alcool = 0;
	int diesel = 0;

	while(true){
		while(true){
			scanf("%d", &n);
			if(n >= 1 || n <= 4) break;
		}
		if(n == 1) alcool++;
		if(n == 2) gasolina++;
		if(n == 3) diesel++;
		if(n == 4) break;
	}

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	return 0;
}