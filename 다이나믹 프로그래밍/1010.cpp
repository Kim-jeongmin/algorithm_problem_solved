#include <bits/stdc++.h>
using namespace std;

int main(){
  long long dp[31][31];
  for(int i=1;i<31;i++){
    for(int j=1;j<=i;j++){
      if(i == j) {
        dp[i][j] = 1;
        break;
      }
      if(i == 1) dp[i][j] = j;
      else if(j == 1) dp[i][j] = i;
      else {
        dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
      }
    }
  }
  int cnt; cin >> cnt;
  while(cnt--){
    int x,y; cin >> x >> y;
    if(x > y) cout << dp[x][y] << '\n';
    else cout << dp[y][x] << '\n';
  }
}