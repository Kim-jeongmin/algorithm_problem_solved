#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase; cin >> testCase;
    while(testCase--){
        int num; cin >> num;
        long long dp[100001][4];

        dp[1][1] = 1;
        dp[2][2] = 1;
        dp[3][3] = 1; dp[3][1] = 1; dp[3][2] = 1;

        for(int i=4;i<=num;i++){
            dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % 1000000009;
            dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % 1000000009;
            dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % 1000000009;
        }

        cout << (dp[num][1] + dp[num][2] + dp[num][3]) % 1000000009 << '\n';
    }
}