#include<bits/stdc++.h> 
using namespace std; 
  
unsigned long long int lookup[101][501]; 
  
unsigned long long int countRec(int n, int sum) { 
    if (n == 0) 
       return sum == 0; 
  
    if (lookup[n][sum] != -1) 
       return lookup[n][sum]; 
  
    unsigned long long int ans = 0; 
  
    for (int i=0; i<10; i++) 
       if (sum-i >= 0) 
          ans += countRec(n-1, sum-i); 
  
    return lookup[n][sum] = ans; 
} 
  
unsigned long long int finalCount(int n, int sum) { 
    memset(lookup, -1, sizeof lookup); 
  
    unsigned long long int ans = 0; 
  
    for (int i = 1; i <= 9; i++) 
      if (sum-i >= 0) 
         ans += countRec(n-1, sum-i); 
    return ans; 
} 
  
int main() { 
    int n = 3, sum = 5; 
    cout << finalCount(n, sum); 
    return 0; 
} 