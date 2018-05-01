#include <bits/stdc++.h>

using namespace std;

#define MAX 1010

vector<int> grafo[MAX];
int visitado[MAX];

void junta (int i){
	if(visitado[i] == 1) return;
	
	visitado[i] = 1;
	for(int j = 0; j < (int) grafo[i].size(); j++){
		junta(grafo[i][j]);
	}
}


int main (){
	int n, m;
	int i;
	int a,b;
	cin >> n >> m;
	queue <int> fila;
	
	for(i = 1; i <= n; i++){
		visitado[i] = 0;
	}
	
	i = m;
	while (i){
		cin >> a >> b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
		i--;
	}
	
	int soma = 0;
	for(i = 1; i <= n; i++){
		if(visitado[i] == 0){
			soma++;
			junta(i);
		}
	}	
	cout << soma << endl;
}
