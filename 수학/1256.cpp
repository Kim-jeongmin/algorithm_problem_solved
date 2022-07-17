#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAX = 1000000000;
ll dp[101][101];

int main(){
    ll N, M, K; cin >> N >> M >> K;

    for(int i=0;i<=100;i++) dp[0][i] = dp[i][0] = 1;
    for(int i=1;i<=100;i++) dp[1][i] = dp[i][1] = i+1;

    for(int i=2;i<=N;i++){
        for(int j=2;j<=M;j++){
            if(MAX < dp[i-1][j] + dp[i][j-1]) dp[i][j] = MAX;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    if(dp[N][M] < K) {
        cout << -1;
    }
    else{
        
        while(N!=0 && M!=0){
            if(dp[N-1][M] < K){
                cout << 'z';
                K -= dp[N-1][M--];
            }
            else{
                cout << 'a';
                N--;
            }
        }
        
        if(N != 0){
            for(int i=0;i<N;i++) cout << 'a';
        }
        else if(M != 0){
            for(int i=0;i<M;i++) cout << 'z';
        }
    
    }

}