#include <bits/stdc++.h>

using namespace std;

vector<bool> primos(100002, true);

int main(){

    long long int N;
    scanf("%lld", &N);

    for (long long int i = 2; i <= N; i++) {
        if(primos[i]){
            printf("%lld ", i);
            for (long long int j = i * i; j <= N; j = j + i)
                primos[j] = false;
        }
    }
    printf("\n");

    return 0;
}
