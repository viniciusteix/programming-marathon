#include<bits/stdc++.h> 
using namespace std; 
#define R 3 
#define C 3 
  
int x[] = {0, 1, 1, -1, 1, 0, -1, -1}; 
int y[] = {1, 0, 1, 1, -1, -1, 0, -1}; 
  
int dp[R][C]; 
  
bool isvalid(int i, int j) { 
    if (i < 0 || j < 0 || i >= R || j >= C) 
      return false; 
    return true; 
} 
  
bool isadjacent(char prev, char curr) { 
    return ((curr - prev) == 1); 
} 
  
int getLenUtil(char mat[R][C], int i, int j, char prev) { 
    if (!isvalid(i, j) || !isadjacent(prev, mat[i][j])) 
         return 0; 
  
    if (dp[i][j] != -1) 
        return dp[i][j]; 
  
    int ans = 0;  
  
    for (int k=0; k<8; k++) 
      ans = max(ans, 1 + getLenUtil(mat, i + x[k], 
                                   j + y[k], mat[i][j])); 
  
    return dp[i][j] = ans; 
} 
  
int getLen(char mat[R][C], char s) { 
    memset(dp, -1, sizeof dp); 
    int ans = 0; 
  
    for (int i=0; i<R; i++) { 
        for (int j=0; j<C; j++) { 
            if (mat[i][j] == s) { 
                for (int k=0; k<8; k++) 
                  ans = max(ans, 1 + getLenUtil(mat, 
                                    i + x[k], j + y[k], s)); 
            } 
        } 
    } 
    return ans; 
} 
  
int main() { 
    char mat[R][C] = { {'a','c','d'}, 
                     { 'h','b','a'}, 
                     { 'i','g','f'}}; 
  
    cout << getLen(mat, 'a') << endl; 
    cout << getLen(mat, 'e') << endl; 
    cout << getLen(mat, 'b') << endl; 
    cout << getLen(mat, 'f') << endl; 
    return 0; 
} 