#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main(){
    string str; cin >> str;
    
    for(int i=0;i<str.size();i++){
        arr[str[i]-'A']++;
    }
    
    int odd_cnt = 0;
    
    for(int i=0;i<26;i++){
        if(arr[i] % 2 != 0) odd_cnt++;
    }
    
    if(odd_cnt > 1) {
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    
    for(int i=0;i<26;i++){
        if(arr[i]>1){
            for(int j=0;j<arr[i]/2;j++){
                cout <<  char('A' + i);
            }
        }
    }
    
    for(int i=0;i<26;i++){
        if(arr[i] % 2 == 1) {
            cout << char('A' + i);
        }
    }
    
    for(int i=25;i>=0;i--){
        if(arr[i]>1){
            for(int j=0;j<arr[i]/2;j++){
                cout << char('A' + i);
            }
        }
    }
}