#include <bits/stdc++.h>

using namespace std;

#define MAX 2010
#define mp make_pair

typedef pair<int,int> ii;

int pos_especiais[MAX];
ii res[MAX][MAX];
int visitado[MAX][MAX];
string s;

ii getMelhor(ii a, ii b){
	if(a.second == b.second){
		if(a.first > b.first) return a;
		else return b;
	}

	if(a.second > b.second) return a;
	return b;
}

ii dinamica(int esq, int dir){
	if(esq > dir) return mp(0,0);
	if(esq == dir) return mp(1,pos_especiais[esq]);

	if(visitado[esq][dir]) return res[esq][dir];

	visitado[esq][dir] = 1;

	ii melhor = mp(0,0);
	ii aux = mp(0,0);
	ii temp;

	if(s[esq] == s[dir]){
		aux = mp(2, pos_especiais[esq] + pos_especiais[dir]);
		temp = dinamica(esq+1, dir-1);
		aux = mp(aux.first + temp.first, aux.second + temp.second);
		melhor = getMelhor(melhor, aux);
	}

	temp = dinamica(esq+1,dir);
	melhor = getMelhor(melhor,temp);
	temp = dinamica(esq,dir-1);
	melhor = getMelhor(melhor,temp);

	res[esq][dir] = melhor;

	return melhor;
}

int main(){
	int n;
	cin >> s;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		pos_especiais[x-1] = 1;
	}
	ii resp = dinamica(0,s.size()-1);
	cout << resp.first << endl;
	return 0;
}