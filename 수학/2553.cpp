#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; cin >> N;
	long long result = 1;
	
	for(int i=1;i<=N;i++){
		result *= i;
		
		while(result % 10 == 0){
			result /= 10;
		}
		
		result = result % 1000000;
	}
	
	cout << result % 10;
}