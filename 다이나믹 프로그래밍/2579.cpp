#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> v(N+1);

  for(int i=1;i<=N;i++) cin >> v[i];

  int dp[304][2];

  dp[1][0] = v[1];
  dp[2][1] = v[1] + v[2];
  dp[2][0] = v[2];


  for(int i=3;i<=N;i++){
    
    dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + v[i];
    dp[i][1] = dp[i-1][0] + v[i];
  }

  int result = 0;

  for(int i=0;i<2;i++){
    result = max(dp[N][i], result);
  }

  cout << result;
}