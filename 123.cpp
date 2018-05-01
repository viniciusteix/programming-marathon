#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INFINITO 999999999

#define MAXN 300
   
int distancia[MAXN];         
int processado[MAXN];        
  

void Dijkstra(int S, int n, vector<ii> vizinhos[]){
	
	for(int i = 0;i < n;i++) {
		distancia[i] = INFINITO; 
		processado[i] = 0;
	}

	distancia[S] = 0;                                  
	
	priority_queue< ii, vector<ii>, greater<ii> > fila;
	fila.push( ii(distancia[S], S) );
	
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
			
			if( distancia[atual] > distancia[davez] + dist ){
				distancia[atual] = distancia[davez] + dist;
				fila.push( ii(distancia[atual], atual) );
			}
		}
	}
	
}

int main() {

  int N, M, C, K, u, v, w;
  while(1){
	  scanf("%d %d %d %d", &N, &M, &C, &K);
	  if(N == 0 && M == 0 && C == 0 && K == 0) break;

	  vector<ii> vizinhos[N+1]; 

	  while(M--){
	  	scanf("%d %d %d", &u, &v, &w);
	  	if(u <= C-1 && v <= C-1){
	  		if(u == v + 1){
	  			vizinhos[v].push_back( ii(w, u) );		
	  		}else if(v == u + 1){
	  			vizinhos[u].push_back(ii(w, v));
	  		}
	  	}else if(u <= C-1 && v > C-1){
	  		vizinhos[v].push_back(ii(w, u));
	  	}else if(u > C-1 && v <= C-1){
	  		vizinhos[u].push_back(ii(w, v));
	  	}else{
	  		vizinhos[u].push_back(ii(w, v));
	    	vizinhos[v].push_back(ii(w, u));	
	  	}
	  }
	  Dijkstra(K,N,vizinhos);
	  printf("%d\n",distancia[C-1]);
  }
  return 0;
}