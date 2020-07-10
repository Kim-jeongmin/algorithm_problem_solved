#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002][3];
int dp[1002][3];

int main(){
    int num; cin >> num;
    for(int i=0;i<num;i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    for(int i=0;i<num;i++){
        if(i==0){
            dp[0][0] = arr[0][0];
            dp[0][1] = arr[0][1];
            dp[0][2] = arr[0][2];
        }
        else {
            dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + arr[i][0];
            dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + arr[i][1];
            dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + arr[i][2];
       }
    }
    cout << min(min(dp[num-1][0],dp[num-1][1]),dp[num-1][2]);
}