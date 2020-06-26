#include <iostream>
using namespace std;

long long dp[202][202];

int main(){
    int N,K; cin >> N >> K;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            if(j==1) dp[i][j] = 1;
            else if(i==1) dp[i][j] = j;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1])%1000000000;
        }
    }
    cout << dp[N][K];
}