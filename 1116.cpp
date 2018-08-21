#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		double x, y;
		scanf("%lf %lf", &x, &y);

		if(y == 0){
			printf("divisao impossivel\n");
		}else{
			double res = x / (y * 1.0);
			printf("%.1lf\n", res);
		}
	}

	return 0;
}