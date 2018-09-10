#include <stdio.h> 
  
int count(int n) { 
    int table[n+1], i; 
  
    memset(table, 0, sizeof(table)); 
  
    table[0] = 1; 
  
    for (i=3; i<=n; i++) 
       table[i] += table[i-3]; 
    for (i=5; i<=n; i++) 
       table[i] += table[i-5]; 
    for (i=10; i<=n; i++) 
       table[i] += table[i-10]; 
  
    return table[n]; 
} 
  
int main(void) { 
    int n = 20; 
    printf("Count for %d is %d\n", n, count(n)); 
  
    n = 13; 
    printf("Count for %d is %d", n, count(n)); 
    return 0; 
}