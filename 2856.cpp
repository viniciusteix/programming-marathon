#include <bits/stdc++.h>

using namespace std;

#define MAX 1001

int qtd[MAX], preco[MAX], matriz[MAX][MAX];
int n, w;
char tipo[MAX];

int mochila(int idx, int W, char np){
	if(idx == n || W == 0) return 0;
	if(tipo[idx] == np) return mochila(idx+1,W,np);
	if(matriz[idx][W] != -1) return matriz[idx][W];
	if(preco[idx] > W) return matriz[idx][W] = mochila(idx+1,W,np);
	return matriz[idx][W] = max(mochila(idx+1,W,np), qtd[idx] + mochila(idx+1,W-preco[idx],np));
}

int main(){
	cin >> n >> w;

	for(int i = 0; i < n; i++){
		int q, p;
		char t;
		cin >> q >> t >> p;
		qtd[i] = q;
		tipo[i] = t;
		preco[i] = p;
	}
	int maximo = -1;
	char tip[3] = {'B','C','G'};

	for(int i = 0; i < 3; i++){
		memset(matriz, -1, sizeof matriz);
		int res = mochila(0,w,tip[i]);
		maximo = max(maximo,res);
	}
	
	cout << maximo << endl;

	return 0;
}