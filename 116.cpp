#include <bits/stdc++.h>

using namespace std;

bool eh_div(long long int N){
    if(N == 1) return false;
    for (long long int i = 2; i * i <= N; i++)
        if(N % i == 0) return true;
    return false;
}

int main(){

    long long int N;

    scanf("%lld", &N);

    if(eh_div(N))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}

