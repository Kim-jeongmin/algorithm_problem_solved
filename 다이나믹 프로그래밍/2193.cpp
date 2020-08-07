#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    long long dp[91][2];
    dp[1][1] = 1; dp[1][0] = 0;

    for(int i=2;i<=a;i++){
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }

    cout << dp[a][0] + dp[a][1];
}