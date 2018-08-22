#include <bits/stdc++.h>

using namespace std;

bool comparator(pair<int,int> a, pair<int,int> b){
    if(a.first < b.first) return true;
    else return false;
}

int main(){
    int n;

    cin >> n;
    vector< pair<int, int> > v;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), comparator);

    int total = 0;

    for(int i = 0; i < n; i++){
        long long int limite_superior = INT_MAX;
        long long int limite_inferior = -INT_MAX;
        long long int x1 = v[i].first;
        long long int y1 = v[i].second;
        for(int j = i+1; j < n; j++){
            long long int x2 = v[j].first;
            long long int y2 = v[j].second;
            if(y2 > y1){
                if(y2 < limite_superior){
                    total++;
                    limite_superior = y2;
                }
            }else{
                if(y2 > limite_inferior){
                    total++;
                    limite_inferior = y2;
                }
            }
        }
    }

    cout << total << endl;

    return 0;
}