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
#define REPETE_(v,i,f) for(int v = i; v >= f; v--)

struct _ { ios_base::Init i; _() { cin.sync_with_stdio(0); cin.tie(0); } } _;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;

#define EPS 1e-14
#define INF 0x3f3f3f3f;
#define PI atan(1)*4;

bool compara(int a, int b){
	return a < b;
}

int main() {
	int n;
	vi pares, impares;

	cin >> n;

	REPETE(i,0,n){
		int num;
		cin >> num;

		if(num % 2 == 0)
			pares.PB(num);
		else
			impares.PB(num);
	}

	sort(ALL(pares));
	sort(ALL(impares),compara);

	REPETE(i,0,pares.size()){
		cout << pares[i] << endl;
	}

	REPETE_(i,impares.size()-1,0){
		cout << impares[i] << endl;
	}

	return 0;
}