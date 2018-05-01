#include <bits/stdc++.h>

using namespace std;

bool eh_primo(long long int N){
    if(N == 1) return false;
    for (long long int i = 2; i * i <= N; i++)
        if(N % i == 0) return false;
    return true;
}

int main(){

    long long int N;

    scanf("%lld", &N);

    if(eh_primo(N))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}

