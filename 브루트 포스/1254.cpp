#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
	
	bool flag = true;
	
	for(int i=0;i<str.size();i++){
		if(str[i] != str[str.size()-1-i]) flag = false;
	}
	
	return flag;
}

int main(){
	
	int result = 101;
	
	string str; cin >> str;
	
	if(str.size() == 1) {
		cout << 1;
		return 0;
	}
	
	for(int i=0;i<=str.size()-2;i++){
		int cnt = str.size()-2-i;
		string temp_str = str;
		
		do{
			if(isPalindrome(temp_str)){
				result = min(result, int(temp_str.size()));
			}
			
			temp_str += str[cnt--];
		
		}while(cnt >= -1);
	}
	
	cout << result;
}