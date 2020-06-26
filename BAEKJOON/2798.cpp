#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,max=0; cin >> a >> b;
    vector<int> v(a);
    for(int i=0;i<a;i++) cin >> v[i];
    for(int i=0;i<a-2;i++){
        for(int j=i+1;j<a-1;j++){
            for(int k=j+1;k<a;k++){
                if(max<v[i]+v[j]+v[k]&&v[i]+v[j]+v[k]<=b) max=v[i]+v[j]+v[k];
            }
        }
    }
    cout << max;
}