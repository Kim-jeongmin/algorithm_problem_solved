#include <bits/stdc++.h>
using namespace std;

int main(){

  int N; cin >> N;

  int dp[3][3];
  int dp2[3][3];
  for(int j=0;j<3;j++) {
    cin >> dp[0][j];
    dp2[0][j] = dp[0][j];
  }
  int m;
  for(int i=1;i<N;i++){
    
    m = i % 3;
    int n = (i-1) % 3;
    int a,b,c; cin >> a >> b >> c;

    dp[m][0] = min(dp[n][0], dp[n][1]) + a;
    dp[m][1] = min(min(dp[n][0], dp[n][1]), dp[n][2]) + b;
    dp[m][2] = min(dp[n][1], dp[n][2]) + c;

    dp2[m][0] = max(dp2[n][0], dp2[n][1]) + a;
    dp2[m][1] = max(max(dp2[n][0], dp2[n][1]), dp2[n][2]) + b;
    dp2[m][2] = max(dp2[n][1], dp2[n][2]) + c;
    
  }

  cout << max(max(dp2[m][0], dp2[m][1]),dp2[m][2]) << ' ' << min(min(dp[m][0],dp[m][1]),dp[m][2]);
}