#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;

	if(s == "roraima" || s == "acre" || s == "amapa" || s == "para" || s == "amazonas" || s == "tocantins" || s == "rondonia"){
		printf("Regiao Norte\n");
	}else{
		printf("Outra regiao\n");
	}

	return 0;
}