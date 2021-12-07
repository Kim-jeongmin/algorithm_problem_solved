#include <bits/stdc++.h>
#define MAX 10000001
using namespace std;

bool palindrome(int num){
	string str = to_string(num);
	bool flag = true;
	
	for(int i=0;i<str.size();i++){
		if(str[i] != str[str.size()-1-i]) flag = false;
	}
	
	return flag;
}

int main(){
	int a, b; cin >> a >> b;
	
	vector<int> v(MAX);
	
	for(int i=2;i<MAX;i++){
		v[i] = i;
	}
	
	for(int i=2;i<MAX;i++){
		if(v[i] == 0) continue;
		
		for(int j=2*i;j<=MAX;j+=i){
			v[j] = 0;
		}
	}
	
	for(int i=a;i<=min(MAX-1, b);i++){
		if(v[i]!=0 && palindrome(i)) {
			cout << i << '\n';
		}
	}
	
	cout << "-1";
}