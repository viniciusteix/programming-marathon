#include <stdio.h>

int main(){

    long long int A,B,C,D;

    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);

    long long int i, result = -1;

    if(C % A != 0){
        printf("%lld\n",result);
        return 0;
    }

    if(A%B != 0 && D%A != 0){
        printf("%lld\n",C);
        return 0;
    }

    for(i = A; i * i <= C * A; i += A){
        if(i%B != 0 && C%i == 0 && D%i != 0){
            result = i;
            break;
        }
    }

    printf("%lld\n",result);

    return 0;
}

