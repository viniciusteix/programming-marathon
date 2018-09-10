#include <bits/stdc++.h>
using namespace std; 
  
#define INF INT_MAX 
#define N 4 
  
int minCost(int cost[][N]) { 
    int dist[N]; 
    for (int i=0; i<N; i++) 
       dist[i] = INF; 
    dist[0] = 0; 
  
    for (int i=0; i<N; i++) 
       for (int j=i+1; j<N; j++) 
          if (dist[j] > dist[i] + cost[i][j]) 
             dist[j] = dist[i] + cost[i][j]; 
  
    return dist[N-1]; 
} 
  
int main() { 
    int cost[N][N] = { {0, 15, 80, 90}, 
                      {INF, 0, 40, 50}, 
                      {INF, INF, 0, 70}, 
                      {INF, INF, INF, 0} 
                    }; 
    cout << "The Minimum cost to reach station "
          << N << " is " << minCost(cost); 
    return 0; 
} 