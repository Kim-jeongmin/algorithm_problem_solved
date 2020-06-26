#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int num; cin >> num;
    for(int i=0;i<num;i++){
       int k; cin >> k;
       if(k&(k-1)) cout << 0 << '\n';
       else cout << 1 << '\n';
    }
}