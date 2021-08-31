#include <bits/stdc++.h>
using namespace std;

int main(){

  int dp[50002];
  dp[1] = 1;

  int n; cin >> n;

  for(int i=2;i<=n;i++){
    int x = 1;
    int result = 9999;
    while(i - x*x >= 0){
      result = min(result, dp[i - x*x]);
      x++;
    }
    dp[i] = result + 1;
  }

  cout << dp[n];
}