#include <iostream>
using namespace std;

long long dp[1002][1002];
int main(){
    int N,K; cin >> N >> K;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=K;j++){
            if(j==0 || j==i) dp[i][j]=1;
            else dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%10007;
        }
    }
    cout << dp[N][K];
}