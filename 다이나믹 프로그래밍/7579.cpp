#include <bits/stdc++.h>
using namespace std;

int N, M;

int Byte[101], Time[101], dp[101][10001], Sum = 0;

int main(){

    cin >> N >> M;

    for(int i=1;i<=N;i++) cin >> Byte[i];
    for(int i=1;i<=N;i++){
        cin >> Time[i];
        Sum += Time[i];
    } 

    for(int i=1;i<=N;i++){
        for(int j=0;j<=Sum;j++){

            if(j - Time[i] >= 0) dp[i][j] = max(dp[i][j], dp[i-1][j-Time[i]] + Byte[i]);
            dp[i][j] = max (dp[i][j], dp[i-1][j]);

        }
    }

    for (int i=0;i<=Sum;i++){
		if (dp[N][i] >= M){
			cout << i;
            break;
		}	
	}
    


}