#include <bits/stdc++.h>
using namespace std;

int dp[31];

int main(){
	int N; cin >> N;
	
	dp[0] = 1;
	dp[2] = 3;
	
	for(int i=4;i<=N;i+=2){
		
		for(int j=i-2;j>=0;j-=2){
			
			if(j == i-2) dp[i] += dp[j] * 3;
			else dp[i] += dp[j] * 2;
		}
	}
	
	cout << dp[N];
}