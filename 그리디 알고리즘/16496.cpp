#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    
    if(a == b) return false;
    
    string ab = a+b;
    string ba = b+a;
    
    if(ab > ba) return true;
    else  return false;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N; cin >> N;
    
    vector<string> v(N);
    
    int flag = 0;
    for(int i=0;i<N;i++){
        cin >> v[i];
        if(v[i] != "0") flag = 1;
    }
    
    
    if(flag == 0) cout << 0;
    else {
        
        sort(v.begin(), v.end(), cmp);
        for(int i=0;i<N;i++){
            cout << v[i];
        }
    }
    
}