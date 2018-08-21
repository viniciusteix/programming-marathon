#include <bits/stdc++.h>

using namespace std;

int main(){
	int inter, gremio;

	int total_inter = 0;
	int total_gremio = 0;
	int v_inter = 0;
	int v_gremio = 0;
	int empates = 0;
	int op;
	while(true){
		scanf("%d %d", &inter, &gremio);
		total_inter += inter;
		total_gremio += gremio;

		if(gremio > inter){
			v_gremio++;
		}else if(gremio < inter){
			v_inter++;
		}else{
			empates++;
		}

		while(true){
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &op);
			if(op == 1 || op == 2) break;
		}
		if(op == 2) break;
	}

	printf("%d grenais\n", v_inter+v_gremio+empates);
	printf("Inter:%d\n", v_inter);
	printf("Gremio:%d\n",v_gremio);
	printf("Empates:%d\n",empates);

	if(v_gremio > v_inter){
		printf("Gremio venceu mais\n");
	}else if(v_gremio < v_inter){
		printf("Inter venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}

	return 0;
}