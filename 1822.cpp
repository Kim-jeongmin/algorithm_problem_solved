#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    set<int> s;
    for(int i=0;i<a;i++) {
        int num; cin >> num;
        s.insert(num);
    }
    for(int i=0;i<b;i++){
        int num; cin >> num;
        s.erase(num);
    }
    cout << s.size() << '\n';
    if(!s.empty()){
        for(auto k:s){
            cout << k << ' ';
        }
    }
}