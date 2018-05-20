#include <bits/stdc++.h>
#define MAX 110
#define ALF 700
using namespace std;

int tabuleiro[MAX][MAX];
int somal[MAX], somac[MAX];
map <string,int> elemento;
int valor[ALF];
int calculado[ALF];
set <string> pertencentes; 
int l, c;


int main (){
	int chave = 1;
	int i, j;
	string aux;
	int restantes = 0;
	
	cin >> l >> c;
	
	for(i = 1; i <= l; i++){
		for(j = 1; j <= c; j++){
			cin >> aux;
			if(pertencentes.find(aux) == pertencentes.end()){
				pertencentes.insert(aux);
				elemento[aux] = chave;
				chave++;
				restantes++;
			}
			tabuleiro[i][j] = elemento[aux];
		}
		cin >> somal[i];
	}
	for(j = 1; j <= c; j++){
		cin >> somac[j];
	}
	
	
	int result;
	int cont;
	int atual;
	int diferentes;
	
	while(restantes){
		
		for(i = 1; i <= l; i++){
			result = somal[i];
			cont = 0; diferentes = 0; atual = -1;
			for(j = 1; j <= c; j++){
				if(calculado[tabuleiro[i][j]]){
					result -= valor[ tabuleiro[i][j] ];
				}
				else{
					if(tabuleiro[i][j] != atual) diferentes++;
					atual = tabuleiro[i][j]; 
					cont++;
				}
			}
			if(diferentes == 1){
				valor[atual] = result/cont;
				calculado[atual] = 1; 
				restantes--;
			}
		}
		///////////////////////////////////////////////////////////////////////////////////////////////
		for(j = 1; j <= c; j++){
			result = somac[j];
			cont = 0; diferentes = 0; atual = -1;
			for(i = 1; i <= l; i++){
				
				if(calculado[tabuleiro[i][j]]){
					result -= valor[ tabuleiro[i][j] ];
				}
				else{
					if(tabuleiro[i][j] != atual) diferentes++;
					atual = tabuleiro[i][j];
					cont++;
				}
			}
			if(diferentes == 1){
				valor[atual] = result/cont;
				calculado[atual] = 1;
				restantes--;
			}
		}
	}
	
	
	
	for (set<string>::iterator it = pertencentes.begin() ; it!=pertencentes.end(); ++it){
      cout << *it << " ";
      cout << valor[elemento[(*it)]] << endl;
    }
	
	
}


/*


cc = 2
aa = 1
bb = 3

4 3
aa aa cc 4
cc aa bb 6
cc aa bb 6
cc aa bb 6
7 4 11 

2 3
aa aa aa 6
aa bb aa 5
4  3   4


2 3
aa aa aa 6
aa bb aa 5
4  3   4

cout << endl;
	for(i = 1; i <= l; i++){
		for(j = 1; j <= c; j++){
			cout << tabuleiro[i][j] << " ";
		}
		cout << endl;
	}



*/
