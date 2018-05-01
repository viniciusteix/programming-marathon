#include <bits/stdc++.h>

using namespace std;

#define MAX 10010

int n;
vector<int> desc[MAX];
vector<int> participou(MAX);
vector<int> nivelP(MAX);
vector<int> nivelE(MAX);



void preenche(int a, int nivel){
	
	if(participou[a]) nivelP[nivel]++;
	nivelE[nivel]++;
	
	if(desc[a].empty()) return;
	
	for(unsigned int i = 0; i < desc[a].size(); i++){
		preenche(desc[a][i], nivel+1);
	}
	
}

int main (){
	
	int n, m;
	int a;
	int i;
	double resultado;
	cin >> n >> m;
	
	for(i = 1; i <= n; i++){
		cin >> a;
		desc[a].push_back(i);
	}
	
	for(i = 1; i <= m; i++){
		cin >> a;
		participou[a] = 1;
	}
	
	preenche(0,0);
	
	for(i = 1; nivelE[i]; i++){
		resultado = (float) nivelP[i]/(nivelE[i]*1.0)*100;
		printf("%.2f ", resultado);
	}
	printf("\n");
}


