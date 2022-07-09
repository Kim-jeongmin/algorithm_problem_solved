#include <bits/stdc++.h>
using namespace std;

int N;
long long arr[103], dp[21][103];
long long result = 0;

int main(){
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    dp[arr[0]][0] = 1;

    for(int i=0;i<N;i++){
        for(int j=0;j<=20;j++){
            if(dp[j][i] != 0){
                if(0<=arr[i+1]+j && arr[i+1]+j<=20){
                    dp[arr[i+1]+j][i+1] += dp[j][i];
                }
                if(0<=j-arr[i+1] && j-arr[i+1]<=20){
                   dp[j-arr[i+1]][i+1] += dp[j][i];
                }
            }
        }
    }
	
    cout << dp[arr[N-1]][N-2];
}