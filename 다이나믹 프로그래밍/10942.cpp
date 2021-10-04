#include <bits/stdc++.h>
#define MAX 2100
using namespace std;

int arr[MAX];
int dp[MAX][MAX];

int main(){
    cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
    int N; cin >> N;
    
    for(int i=1;i<=N;i++) {
        cin >> arr[i];
        dp[i][i] = 1;
    }
    
    //홀수 길이 팰린드롬
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(j-i < 1 || j+i > N) continue;
            if(dp[j-i+1][j+i-1] == 1 && arr[j-i] == arr[j+i]) 
                dp[j-i][j+i] = 1;
        }
    }
    
    //짝수 길이 팰린드롬
    for(int i=1;i<N;i++) {
        if(arr[i] == arr[i+1]) dp[i][i+1] = 1;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(j-i < 1 || j+i+1 > N) continue;
            if(dp[j-i+1][j+1+i-1] == 1 && arr[j-i] == arr[j+1+i]) 
                dp[j-i][j+i+1] = 1;
        }
    }
    
    
    
    
    
    int M; cin >> M;
    int S, E;
    
    while(M--){
        cin >> S >> E;
        cout << dp[S][E] << '\n';
    }
    
    /*
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    */
}