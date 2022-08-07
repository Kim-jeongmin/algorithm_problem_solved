#include <bits/stdc++.h>
using namespace std;

int arr[1001], dp[1001][2];

int main(){
    int N; cin >> N;

    for(int i=0;i<N;i++) cin >> arr[i];

    dp[0][0] = 1;
    for(int i=1;i<N;i++){
        
        dp[i][0] = 1;
        for(int j=0;j<i;j++){
            
            if(arr[i] > arr[j] && dp[i][0] < dp[j][0] + 1) dp[i][0] = dp[j][0] + 1; 
        }
    }

    dp[N-1][1] = 1;
    for(int i=N-2;i>=0;i--){

        dp[i][1] = 1;
        for(int j=N-1;j>i;j--){
            
            if(arr[i] > arr[j] && dp[i][1] < dp[j][1] + 1) dp[i][1] = dp[j][1] + 1;
        }
    }

    int result = 0;
    for(int i=0;i<N;i++) {
        result = max(result, dp[i][0] + dp[i][1] - 1);
    }

    cout << result;


}