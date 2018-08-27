#include <bits/stdc++.h>

using namespace std;

long double matriz[21][21];
long double res[21][21];
long double estado_inicial[21];
long double resultado[21];

void multiplica_matriz(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			res[i][j] = 0.0;
			for(int k = 0; k < n; k++){
				res[i][j] += matriz[i][k] * matriz[k][j];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matriz[i][j] = res[i][j];
		}
	}
}

int main(){
	int ev1, ev2, at, d;

	while(true){
		cin >> ev1 >> ev2 >> at >> d;
		if(ev1 == 0 && ev2 == 0 && at == 0 && d == 0) break;

		ev1 = 1 + (ev1 - 1) / d; // ceil
        ev2 = 1 + (ev2 - 1) / d; // ceil

		for(int i = 0; i < 21; i++){
			for(int j = 0; j < 21; j++){
				matriz[i][j] = 0.0;
			}
		}

		int t = ev1 + ev2;

		long double ganhar = at/6.0;
		long double perder = 1.0 - ganhar;

		matriz[0][0] = 1.0;
		matriz[t][t] = 1.0;

		for(int i = 1; i < t; i++){
			matriz[i][i-1] = perder;
			matriz[i][i+1] = ganhar;
		}

		for(int i = 0; i < 100; i++){
			multiplica_matriz(t+1);
		}

		for(int i = 0; i <= t; i++){
			if(i == ev1) estado_inicial[i] = 1.0;
			else estado_inicial[i] = 0.0;
		}

		for(int i = 0; i <= t; i++){
			for(int j = 0; j <= t; j++){
				resultado[i] = 0.0;
				for(int k = 0; k <= t; k++){
					resultado[i] += estado_inicial[k] * matriz[k][j];
				}
			}
		}

		printf("%.1Lf\n", resultado[t]*100.0);

	}

	return 0;
}