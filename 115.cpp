#include <stdio.h>
#include <iostream>
#include <vector>
#define INF 1000000

using namespace std;

int mosaico[210][210];
int acessado[210][210];
int h,l;

int tamanho (int i, int j){
	if(acessado[i][j] == 1) return 0;
	acessado[i][j] = 1;
	int soma = 1;
	
	if( mosaico[i][j] == mosaico[i][j+1] && j < l){
		soma += tamanho(i,j+1);
	}
	if( mosaico[i][j] == mosaico[i+1][j] && i < h){
		soma += tamanho(i+1,j);
	}
	if( mosaico[i][j] == mosaico[i-1][j] && i > 1){
		soma += tamanho(i-1,j);
	}
	if( mosaico[i][j] == mosaico[i][j-1] && j > 1){
		soma += tamanho(i,j-1);
	}
	
	return soma;
}


int main (){
	
	int i,j;
	int minimo = INF, tam;
	
	cin >> h >> l;
	
	for(i = 1; i <= h; i++){
		for(j = 1; j <= l; j++){
			cin >> mosaico[i][j];
			acessado[i][j] = 0;
		}
	}
	
	//cout << tamanho(1,1);
	
	for(i = 1; i <= h; i++){
		for(j = 1; j <= l; j++){
			if(!acessado[i][j]){
				tam = tamanho(i,j);
				if(tam < minimo){
					minimo = tam;
				}
			}
		}
	}
	cout << minimo << endl;
}
