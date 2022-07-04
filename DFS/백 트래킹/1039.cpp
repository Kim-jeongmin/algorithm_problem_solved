#include <bits/stdc++.h>
using namespace std;

bool check[1000001][11];
string str; int m;
int result = 0;

void dfs(int K){
    if(str[0] == '0') return;
    if(K == 0){
        result = max(result, stoi(str));
        return;
    }

    for(int i=0;i<str.size()-1;i++){
        for(int j=i+1;j<str.size();j++){
            swap(str[i], str[j]);

            if(check[stoi(str)][K-1] == false){
                check[stoi(str)][K-1] = true;
                dfs(K-1);   
            }

            swap(str[j], str[i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> str >> m;

    dfs(m);

    if(result == 0) cout << -1;
    else cout << result;
}