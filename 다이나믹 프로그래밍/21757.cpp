#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 100001;

ll arr[MAX], prefix_sum[MAX], sum;

int main(){
    int N; cin >> N;

    for(int i=0;i<N;i++) cin >> arr[i];

    prefix_sum[0] = arr[0];
    for(int i=1;i<N;i++) prefix_sum[i] = arr[i] + prefix_sum[i-1];
    
    sum = prefix_sum[N-1];
    ll toler = sum / 4;
    ll now = toler;

    if(toler != 0){
        ll dp[MAX];
        for(int k=0;k<4;k++){
            for(int i=0;i<N;i++){
                
                if(prefix_sum[i] == now){
                    if(now == toler) dp[i] ++;
                    else {
                        for(int j=0;j<i;j++){
                            if(now - toler == prefix_sum[j]){
                                dp[i] += dp[j]; 
                            }
                        }
                    }
                }
            
            }
            now += toler;
        }

        cout << dp[N-1];
    }
    else {
        ll dp[MAX][4];
        int cnt = 0;
        for(int i=0;i<N;i++) if(prefix_sum[i] == 0) cnt++;

        for(int i=0;i<=cnt-1;i++){
            for(int j=0;j<=3;j++){
                if(j == 0 || j == i) dp[i][j] = 1;
                else dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
            }
        }
        cout << dp[cnt-1][3];
    }
    



}