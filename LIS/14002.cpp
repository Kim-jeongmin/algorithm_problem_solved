#include <bits/stdc++.h>
using namespace std;

int main(){
    int num; cin >> num;
    vector<int> v(num);
    vector<pair<int,int>> dp(num);
    int result = 1, max_idx = 0;
    for(int i=0;i<num;i++) cin >> v[i];

    dp[0] = {1,-1};

    for(int i=1;i<num;i++){
        dp[i] = {1,-1};
         for(int j=0;j<i;j++){    
            if(v[i] > v[j] && dp[j].first + 1 > dp[i].first) {
                dp[i].first = dp[j].first + 1;
                dp[i].second = j;
            }
        }
        if(result < dp[i].first) max_idx = i;
        result = max(result, dp[i].first);
    }

    cout << result << '\n';

    stack<int> s;
    while(dp[max_idx].second != -1){
        s.push(v[max_idx]);
        max_idx = dp[max_idx].second;
    } 
    
    cout << v[max_idx] << ' ';

    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
}