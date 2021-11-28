#include <bits/stdc++.h>
using namespace std;

int main(){
	long long L, R; cin >> L >> R;
	int result = 99;
	
	for(long long i=L;i<=R;i++){
		
		long long num = i;
		int temp_result = 0;
		
		while(num != 0){
			if(num % 10 == 8) temp_result ++;
			num/=10;
		}
		
		result = min(temp_result, result);
		
		if(result == 0) break;
	}
	
	cout << result;
}