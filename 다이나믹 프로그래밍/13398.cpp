#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
int arr[MAX], dp[MAX][2];

int main(){
    int n; cin >> n;

    for(int i=1;i<=n;i++) {
        cin >> arr[i];
        dp[i][0] = dp[i][1] = -1001;
    }
    

    dp[1][0] = arr[1];
    for(int i=2;i<=n;i++){
        dp[i][0] = max(dp[i-1][0] + arr[i], arr[i]);
        dp[i][1] = max(dp[i-2][0] + arr[i], dp[i-1][1] + arr[i]);
    }
    

    int result = INT_MIN;
    for(int i=1;i<=n;i++) result = max(result, max(dp[i][0], dp[i][1]));

    cout << result;
}