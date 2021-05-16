#include <bits/stdc++.h>
using namespace std;

int dp[502][502];

int main(){
  
  int n; cin >> n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      int k; cin >> k;

      if(i == 1) dp[i][j] = k;
      else {
        if(j != 1) dp[i][j] = max(dp[i-1][j] + k,dp[i-1][j-1] + k);
        else dp[i][j] = dp[i-1][j] + k;
      }
    }
  }

  int result = 0;

  for(int i=1;i<=n;i++){
    result = max(result, dp[n][i]);
  }

  cout << result;
}