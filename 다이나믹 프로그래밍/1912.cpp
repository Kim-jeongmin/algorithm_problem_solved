#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
int arr[MAX], dp[MAX];

int main(){
    int n; cin >> n;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
        dp[i] = INT_MIN;
    }
    

    dp[0] = arr[0];
    for(int i=1;i<n;i++){
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
    }

    int result = INT_MIN;
    for(int i=0;i<n;i++) result = max(result, dp[i]);

    cout << result;
}