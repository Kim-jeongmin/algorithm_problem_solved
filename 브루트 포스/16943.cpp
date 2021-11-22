#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt = 0;
	int result = -1;
	int A, B; cin >> A >> B;
	vector<int> v;
	
	while(A != 0){
		v.push_back(A % 10);
		A/=10;
		cnt++;
	}
	
	sort(v.begin(), v.end());
	
	do{
		
		int temp_result = 0;
		if(v[cnt-1] == 0) continue;
		
		for(int i=0;i<cnt;i++){
			temp_result += v[i] * pow(10, i);
		}
		
		if(temp_result < B) result = max(result, temp_result);
		
		
	}while(next_permutation(v.begin(), v.end()));
	
	
	cout << result;
	
}