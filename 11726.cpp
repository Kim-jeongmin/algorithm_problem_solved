#include <bits/stdc++.h>
using namespace std;

int dp[2][1001];
int mod = 10007;

int main(){

    int n; cin >> n;
    dp[0][1] = 1; dp[1][2] = 1; dp[0][2] = 1;

    for(int i=3;i<=n;i++) {
        dp[0][i] = (dp[0][i-1] + dp[1][i-1])%mod;
        dp[1][i] = (dp[0][i-2] + dp[1][i-2])%mod;
    }

    cout << (dp[0][n] + dp[1][n])%mod;
}