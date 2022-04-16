#include <bits/stdc++.h>
using namespace std;

long arr[101][101];
long dp[101][101];
int N;

bool isIn(int x, int y){
    return 0<=x && x<N && 0<=y && y<N;
}

int main(){
    dp[0][0] = 1;
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j] == 0) continue;

            if(isIn(i+arr[i][j], j)){
                dp[i+arr[i][j]][j] += dp[i][j];
            }

            if(isIn(i, j+arr[i][j])){
                dp[i][j+arr[i][j]] += dp[i][j];
            }    
        }
    }

    cout << dp[N-1][N-1];
}