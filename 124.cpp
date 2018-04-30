#include <bits/stdc++.h>
using namespace std;
#define N 510

enum Cor {branco, cinza, preto};

list<int> Adj[N];
int cor[N];
int idade[N];
int idx[N];

int DFS_visit(int u){
    cor[u] = cinza;
    int minimo = INT_MAX;
    list<int>::iterator it;
    for(it=Adj[u].begin(); it != Adj[u].end(); it++){
        if(cor[*it] == branco){
            minimo = min(min(minimo,idade[*it]),DFS_visit(*it));
        }
    }
    cor[u] = preto;
    return minimo;

}

int DFS(int x, int n){

	if(Adj[x].empty()) return -1;
    for(int i = 1; i <= n; i++){
        cor[i] = branco;
    }
    return DFS_visit(x);
}


int main (){

	int n, m, l;
	int x, y;
	char op;

	while( scanf("%d%d%d", &n, &m, &l) != EOF){
		for(int i = 1; i <= n; i++){
			scanf("%d", &idade[i]);
			idx[i] = i;
		}
		for(int i = 1; i <= m; i++){
			scanf("%d%d", &x,&y);
			Adj[y].push_back(x);
		}

		for(int i = 0; i < l; i++){
			scanf(" %c", &op);
			if(op == 'P'){
				int a,b;
				scanf("%d",&a);
				b = DFS(idx[a],n);
				if(b == -1) printf("*\n");
				else printf("%d\n",b);
			}
			else{
				int a,b;
				scanf("%d %d",&a,&b);
				swap(idade[idx[a]],idade[idx[b]]);
        		swap(idx[a],idx[b]);	
			}
		}
	}
	return 0;
}