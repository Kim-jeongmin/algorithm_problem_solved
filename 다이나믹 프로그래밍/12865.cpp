#include <bits/stdc++.h>
using namespace std;

int main(){

  int N, K; cin >> N >> K;
  vector<int> P(N+1);
  vector<int> W(N+1);

  vector<vector<int> > dp(N+1, vector<int>(K+1, 0));

  for(int i=1;i<=N;i++) cin >> W[i] >> P[i];

  for(int i=1;i<=N;i++){
    for(int j=1;j<=K;j++){
      if(j >= W[i]) dp[i][j] = max(dp[i-1][j], P[i] + dp[i-1][j - W[i]]);
      else dp[i][j] = dp[i-1][j];
    }
  }

  cout << dp[N][K];
}