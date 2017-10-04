#include <cctype>
#include <string>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <bitset>
#include <limits>

using namespace std;

#define PB(x)       push_back(x)
#define MP(x,y)     make_pair(x,y)
#define ALL(x)      x.begin(), x.end()
#define RALL(x)     x.rbegin(), x.rend()
#define READ(x)     freopen(x, "r", stdin)
#define WRITE(x)    freopen(x, "w", stdout)
#define SORT(x)     sort(ALL(x))
#define DREP(x)     sort(ALL(x)); x.erase(unique(ALL(x)),x.end())
#define CLEAR(c)    memset(c, 0, sizeof(c))
#define P(x)        ">>> " << #x << " : " << x << endl
#define C(x)        cout << P(x)
#define CC(x)       clog << P(x)
#define TR(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define PRESENT(c,x) ((c).find(x) != (c).end()) 
#define CPRESENT(c,x) (find(all(c),x) != (c).end()) 
#define REPETE(v,i,f) for(int v = i; v < f; v++)

struct _ { ios_base::Init i; _() { cin.sync_with_stdio(0); cin.tie(0); } } _;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;

#define EPS 1e-14
#define INF 0x3f3f3f3f;
#define PI atan(1)*4;

int main() {
	int n;
	cin >> n;
	while(n != 0){
		vi vetor;
		vi aux;

		bool flag = false;

		REPETE(i,1,n+1){
			int x;
			cin >> x;
			if(x == 0){
				flag = true;
				break;
			}
			vetor.PB(x);
			aux.PB(i);
		}

		if(flag){
			cin >> n;
			if(n == 0){
				break;
			}
			cout << endl;
			continue;
		}

		stack<int> pilha;

		int i = 0;
		int j = 0;

		while(i < n || !pilha.empty()){
			if(j < n && i < n && vetor[j] == aux[i]){
				i++;
				j++;
			}else{
				if(!pilha.empty() && pilha.top() == vetor[j]){
					pilha.pop();
					j++;
				}else if(i < n){
					pilha.push(aux[i]);
					i++;
				}else
					break;
			}
		}

		if(i == n && pilha.empty()){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
			
	}
	cout << endl;
	return 0;
}