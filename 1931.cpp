#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

#define MAXN 10100
#define INFINITO 999999999

int n, m;                      
int distancia[MAXN];           
int processado[MAXN];          
vector<pii> vizinhos[MAXN];
vector<pii> grafo[MAXN];
int num_arestas[MAXN];
int cor[MAXN];

void Dijkstra(int S){
	
	for(int i = 1;i <= n;i++) {
		distancia[i] = INFINITO; 
		num_arestas[i] = 0;
	}
	distancia[S] = 0;                                  
	
	priority_queue< pii, vector<pii>, greater<pii> > fila;
	fila.push( pii(distancia[S], S) );
	
	while(true){
		
		int davez = -1;
		int menor = INFINITO;
		
		while(!fila.empty()){
			
			int atual = fila.top().second;
			fila.pop();
			
			if(!processado[atual]){
				davez = atual;
				break;
			}
		}
		
		if(davez == -1) break; 
		
		processado[davez] = true;
		
		for(int i = 0;i < (int)vizinhos[davez].size();i++){
			
			int dist  = vizinhos[davez][i].first;
			int atual = vizinhos[davez][i].second;
			
			if( distancia[atual] > distancia[davez] + dist){  
				distancia[atual] = distancia[davez] + dist;
				num_arestas[atual] = num_arestas[davez] + 1;
				fila.push( pii(distancia[atual], atual));
			}
		}
	}
	
}

int main(){

	scanf("%d %d",&n,&m);

	for(int i = 0; i < m; i++){
		int x,y,w;
		scanf("%d %d %d",&x,&y,&w);
		grafo[x].push_back(pii(w,y));
		grafo[y].push_back(pii(w,x));
	}

	for(int i = 1; i <= n; i++){
		vector< pii >::iterator it;
		for(it = grafo[i].begin(); it != grafo[i].end(); it++){
			int w1 = it->first;
			int v1 = it->second;
			vector< pii >::iterator it2;
			for(it2 = grafo[v1].begin(); it2 != grafo[v1].end(); it2++){
				int w2 = it2->first;
				int v2 = it2->second;
				vizinhos[i].push_back(pii(w1+w2,v2));
			}
		}
	}

	Dijkstra(1);

	if(distancia[n] != INFINITO){
		printf("%d\n", distancia[n]);
	}else{
		printf("-1\n");
	}

	return 0;
}