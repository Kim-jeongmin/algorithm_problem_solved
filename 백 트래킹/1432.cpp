#include <bits/stdc++.h>
using namespace std;

int arr[26];
int result = 0;
int N;

bool isTrue(string str){
	
	bool flag = true;
	
	for(int i=0;i<str.size()-1;i++){
		if(str[i] == str[i+1]) flag =false;
	}
	
	return flag;
}

void dfs(int pos, string str){
	
	if(pos == N){
		if(isTrue(str)) result ++;
		return;
	}
	
	for(int i=0;i<26;i++){
		if(arr[i]) {
			str += char(i+'a');
		
			arr[i] --;
		
			dfs(pos+1, str);
		
			str = str.substr(0,str.length()-1);
			arr[i]++;
		}
	}
}

int main(){
	string str; cin >> str;
	N = str.size();
	
	for(int i=0;i<str.size();i++){
		arr[str[i] - 'a']++; 
	}
	
	dfs(0, "");
	
	cout << result;
}