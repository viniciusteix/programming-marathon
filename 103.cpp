#include <bits/stdc++.h>

using namespace std;

#define MAX 100010

vector<int> rel[MAX];
int tamanho[MAX];
int equilibrado[MAX];

int numeraTamanho(int a){
	int i;
	int soma = 0;
	if(rel[a].empty()){
		 tamanho[a] = 1;
		 return 1;
	}
	int t = rel[a].size();
	for(i = 0; i < t; i++){
		soma += numeraTamanho(rel[a][i]);
	}
	tamanho[a] = soma+1;
	return soma+1;
}

int estaEquilibrado(int a){
	if(rel[a].empty()){
		 return 1;
	}
	int first = tamanho[rel[a][0]];
	
	int t = rel[a].size();
	for(int i = 0; i < t; i++){
		if( tamanho[rel[a][i]] != first || !estaEquilibrado(rel[a][i]) ){
			return 0;
		}
	}
	return 1;
}

int main (){
	int n, a, b, i;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> a >> b;
		rel[b].push_back(a);
	}
	numeraTamanho(0);
	if(estaEquilibrado(0)) cout << "bem" << endl;
	else cout << "mal" << endl;
	
	return 0;
}
