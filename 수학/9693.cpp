#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int cnt = 1;
	
	while(true){
		int two_cnt = 0, five_cnt = 0;
		int N; cin >> N;
		if(N == 0) break;
		
		for(int i=1;i<=N;i++){
			int n = i;
			while(true){
				if(n % 2 != 0) break;
				n/=2;
				two_cnt++;
			}
			
			n = i;
			while(true){
				if(n % 5 != 0) break;
				n/=5;
				five_cnt++;
			}
		}
		
		cout << "Case #" << cnt << ": " << min(five_cnt, two_cnt) << '\n';
		cnt++;
	}
}