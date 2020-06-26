#include <iostream>
using namespace std;

long long dp[1002][1002];

int main(){
    int n,m; cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || j==1) dp[i][j] = 1;
            else dp[i][j] = (dp[i][j-1] + dp[i-1][j] + dp[i-1][j-1])%1000000007;
        }
    }
    cout << dp[n][m];
}