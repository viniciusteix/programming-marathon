#include <bits/stdc++.h>

using namespace std;

int main(){
	double value;
	double total = 0;
	int op;
	int count = 0;
	while(true){
		scanf("%lf", &value);
		if(value < 0 || value > 10){
			printf("nota invalida\n");
			continue;
		}
		total += value;
		count++;

		if(count == 2){
			count = 0;
			total = total / 2.0;
			printf("media = %.2lf\n",total);
			total = 0;
			printf("novo calculo (1-sim 2-nao)\n");
			while(true){
				scanf("%d", &op);
				if(op == 1 || op == 2) break;
				printf("novo calculo (1-sim 2-nao)\n");
			}
			if(op == 2) break;
		}
	}

	return 0;
}