#include <bits/stdc++.h>
using namespace std;

int n, m, result = 0;
int dp[1001][1001];

void find_max_square(){

    for(int k=1;k<min(n,m);k++){
        for(int i=0;i<n-k;i++){
            for(int j=0;j<m-k;j++){
                
                if(dp[i][j]) {
                    dp[i][j] = min(dp[i+1][j], min(dp[i+1][j+1], dp[i][j+1])) + 1;


                    result = max(result, dp[i][j]);
                }

            }
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i=0;i<n;i++){
        string str; cin >> str;
        for(int j=0;j<str.size();j++){
            dp[i][j] = str[j] - '0';

            if(dp[i][j] == 1) result = 1;
        }
    }

    find_max_square();

    cout << result * result;

}