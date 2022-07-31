#include <bits/stdc++.h>
using namespace std;

int arr[1001], dp[1001][1001];

int cardgame(int left, int right, int turn){

    if(left > right) return 0;
    if(dp[left][right]) return dp[left][right];

    if(turn % 2) return dp[left][right] = max(arr[left] + cardgame(left+1, right, turn+1), arr[right] + cardgame(left, right-1, turn+1));

    else return dp[left][right] = min(cardgame(left+1, right, turn+1), cardgame(left, right-1, turn+1));
    
}

int main(){
    int T; cin >> T;

    while(T--){
        int N; cin >> N;

        for(int i=0;i<N;i++) cin >> arr[i];
        
        cardgame(0, N-1, 1);
        
        cout << dp[0][N-1] << '\n';

        memset(dp, 0, sizeof(dp));

    }
}