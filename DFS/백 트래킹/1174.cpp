#include <bits/stdc++.h>
using namespace std;

int N;
vector<long long> v;

void dfs(string str){
    
    if(str != "") {
        long long n = stoll(str);
        v.push_back(n);
    }
    
    
    for(int i=0;i<10;i++){
        string num = to_string(i);
    
        if(i > str[0]-'0') dfs(num+str);
        
    }
    
}


int main(){
    cin >> N;
    
    dfs("");
    
    sort(v.begin(),v.end());
    
    if(N > v.size()) cout << -1;
    else cout << v[N-1];
}