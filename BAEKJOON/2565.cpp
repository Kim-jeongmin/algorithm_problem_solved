#include <bits/stdc++.h>
using namespace std;

int main(){
    int num; cin >> num;
    int Max = 0, result = 0;
    vector<int> v(502);
    vector<int> dp(502);
    for(int i=0;i<num;i++){
        int a,b; cin >> a >> b;
        v[a] = b;
        a = max(a,b);
        Max = max(Max,a);
    }

    dp[1] = 1;

    for(int i=2;i<=Max;i++){
        if(v[i] == 0) continue;
        dp[i] = 1;
        for(int j=1;j<i;j++){
            if(v[j] == 0) continue;
            if(v[i] > v[j] && dp[j] + 1 > dp[i]) dp[i] = dp[j] + 1;
        }
        result = max(result, dp[i]);
    }
    
    cout << num - result;
}