#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,M; cin >> N >> M;
    vector<long long> v(N);
    for(int i=0;i<N;i++) cin >> v[i];
    sort(v.begin(),v.end());
    long long r,p=0,q=0,result = 9999999999999;
    while(N > p && N > q){
        r = v[q] - v[p];
        if(r >= M) {
            result = min(result,r);
            p++;
        }
        else q++;
        if(p == q) q++;
        if(q >= N) p++;
    }
    cout << result;
}