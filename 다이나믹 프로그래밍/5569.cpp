#include <bits/stdc++.h>
using namespace std;

const int mod = 100000;
int arr[101][101][2][2];
// 행, 열, 방향 전환 가능 여부, 방향 아래 0 오른 1

int main(){
    
    int w, h; cin >> w >> h;

    for(int i=1;i<=100;i++) arr[i][1][1][0] = arr[1][i][1][1] = 1;

    for(int i=2;i<=w;i++){
        for(int j=2;j<=h;j++){  

            // 방향 전환 가능한데 아래
            arr[i][j][1][0] = (arr[i-1][j][0][0] + arr[i-1][j][1][0])%mod; 

            // 방향 전환 가능한데 오른
            arr[i][j][1][1] = (arr[i][j-1][0][1] + arr[i][j-1][1][1])%mod;

            // 방향 전환 불가능한데 아래
            arr[i][j][0][0] = arr[i-1][j][1][1]%mod;

            // 방향 전환 불가능한데 오른
            arr[i][j][0][1] = arr[i][j-1][1][0]%mod;
        
        }
    }

    cout << (arr[w][h][0][0] + arr[w][h][0][1] + arr[w][h][1][0] + arr[w][h][1][1])%mod << '\n';
}