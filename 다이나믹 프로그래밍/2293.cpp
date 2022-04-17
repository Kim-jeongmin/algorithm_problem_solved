#include <bits/stdc++.h>
using namespace std;

int n, k;
int result = 0;

int main(){
    cin >> n >> k;
    vector<int> v(n);
    vector<int> dp(k+1);

    for(int i=0;i<n;i++) cin >> v[i];

    dp[0] = 1;

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            if(j-v[i] >= 0){
                dp[j] += dp[j-v[i]];
            }
        }
    }
    

    cout << dp[k];
}