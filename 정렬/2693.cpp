#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;

    while(T--){

        vector<int> v(10);

        for(int i=0;i<10;i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << v[7] << '\n';
    }
}