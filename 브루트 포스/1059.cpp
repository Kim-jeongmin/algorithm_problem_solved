#include <bits/stdc++.h>
using namespace std;

int main(){
    int L; cin >> L;

    vector<int> v(L+1);
    for(int i=0;i<L;i++) cin >> v[i];
    v[L] = 0;
    sort(v.begin(), v.end());

    int n, result = 0; cin >> n;
    for(int i=0;i<L;i++){
        if(v[i] == n) break;
        if(v[i] < n && n < v[i+1]){

            for(int k=v[i]+1;k<v[i+1]-1;k++){
                for(int j=k+1;j<v[i+1];j++){
                    if(k <= n && n <= j) result++;
                }
            }

            break;
        }
    }

    cout << result;

}