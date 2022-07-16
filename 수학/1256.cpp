#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[101][101];

int main(){
    ll N, M, K; cin >> N >> M >> K;
    vector<char> v;

    for(int i=0;i<N;i++) v.push_back('a');
    for(int i=0;i<M;i++) v.push_back('z');

    for(int i=1;i<=M;i++) dp[1][i] = i+1;
    for(int i=1;i<=N;i++) dp[i][1] = i+1;

    for(int i=2;i<=N;i++){
        for(int j=2;j<=M;j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    if(dp[N][M] < K) {
        cout << -1;
    }
    else{
        int k = 1;
        while(k != K){
            next_permutation(v.begin(), v.end());
            k++;
        }

        
        for(int i=0;i<v.size();i++){
            cout << v[i];
        }
        
    }

    /*
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    */
}