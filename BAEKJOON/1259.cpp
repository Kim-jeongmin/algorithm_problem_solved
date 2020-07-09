#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        string str; cin >> str;
        if(str == "0") break;
        string cmp;
        for(int i=str.size()-1;i>=0;i--){
            cmp = cmp + str.substr(i,1);
        } 
        if(cmp == str) cout << "yes\n";
        else cout << "no\n";
    }
}

