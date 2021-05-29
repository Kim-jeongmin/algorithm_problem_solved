#include <bits/stdc++.h>
using namespace std;

int main(){

  int N; cin >> N;
  long long arr[502][2];
  long long dp[502][502];

  for(int i=0;i<N;i++){
    for(int j=0;j<2;j++){
      if(i == N-1 && j == 1) cin >> arr[N][0];
      else cin >> arr[i][j];
    }
  }

  for(int diagonal = 1; diagonal < N; diagonal++){
    for(int i=0;i<=N-diagonal;i++){
      int j = diagonal + i;

      for(int k = i; k < j; k++){

        if(dp[i][j] == 0) dp[i][j] = dp[i][k] + dp[k+1][j] + arr[i-1][0]*arr[k][0]*arr[j][0];
        else  dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + arr[i-1][0]*arr[k][0]*arr[j][0]);
      }
    }
  }

  cout << dp[1][N] << '\n';
}