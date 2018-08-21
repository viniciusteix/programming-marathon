#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d;
	while(true){
		scanf("%d %d", &n, &d);

		if(n == 0 && d == 0) break;

		char a[n];

		for(int i = 0; i < n; i++){
			char c;
			cin >> c;
			a[i] = c;
		}

		stack<int> pilha;
		int temp = a[0] - '0';
		pilha.push(temp);

		for(int i = 1; i < n; i++){
			temp = a[i] - '0';

			if(d == 0){
				pilha.push(temp);
			}else{
				if(pilha.empty()){
					pilha.push(temp);
				}else{
					if(temp > pilha.top()){
						while(!pilha.empty() && d > 0 && temp > pilha.top()){
							pilha.pop();
							d--;
						}
						pilha.push(temp);
					}else{
						pilha.push(temp);
					}
				}
			}
		}

		for(int i = 0; i < d; i++){
			pilha.pop();
		}

		list<int> v;
		while(!pilha.empty()){
			v.push_front(pilha.top());
			pilha.pop();
		}

		list<int>::iterator it;

		for(it = v.begin(); it != v.end(); it++){
			cout << *it;
		}
		cout << endl;
	}

	return 0;
}