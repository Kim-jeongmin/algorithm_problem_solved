#include <bits/stdc++.h>
using namespace std;

int main(){
    int num; cin >> num;
    int result = 0;
    vector<int> v(num);
    vector<int> dp(num);
    for(int i=0;i<num;i++) cin >> v[i];
    dp[0] = 1;
    for(int i=1;i<num;i++) {  
        dp[i] = 1;
        for(int j=0;j<i;j++){    
            if(v[i] > v[j] && dp[j] + 1 > dp[i]) dp[i] = dp[j] + 1;
        }
        result = max(result, dp[i]);
    }
    cout << result;
}