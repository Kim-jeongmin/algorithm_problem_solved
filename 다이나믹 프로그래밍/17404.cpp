#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002][3];
int dp[1002][3];

int main(){

  int N; cin >> N;
  int result = 1000 * 1000 + 1;

  for(int i=0;i<N;i++){
    for(int j=0;j<3;j++){
      cin >> arr[i][j];
    }
  }

  for(int k=0;k<3;k++){ // k(0 == red, 1 == green, 2 == blue)
    
    for(int i=0;i<3;i++){
      if(k == i) dp[0][i] = arr[0][i];
      else dp[0][i] = 1000 * 1000 + 1;
    }

    for(int i=1;i<N;i++){

      dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
      dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
      dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2];

    }

    for(int i=0;i<3;i++){
      if(k==i) continue;
      result = min(result, dp[N-1][i]);
    }
  }

  cout << result;
}