#include <bits/stdc++.h>
using namespace std;

int dp[100002];

int main(){
  int N; cin >> N;
  dp[1] = 1;
  
  for(int i=2;i<=N;i++){
    int result = 9999;
    int x = 1;
    while(i - x*x >= 0){
      result = min(result, dp[i - x*x] + 1);
      x++;
    }
    dp[i] = result;
  }
  
  cout << dp[N];
}