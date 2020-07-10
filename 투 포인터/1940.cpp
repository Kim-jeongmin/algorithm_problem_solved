#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,M; cin >> N >> M;
    vector<long long> v(N);
    for(int i=0;i<N;i++) cin >> v[i];
    sort(v.begin(),v.end());
    long long p = 0, q = 1, result = 0;
    while(N>1 && N-1>p) {
        long long sum = v[p] + v[q];
        if(sum < M) q++;
        else if(sum >= M) {
            if(sum == M) result++;
            p++; q = p + 1;
        }
        if(q >= N) {
            p++; q=p+1;
        }
    }
    cout << result;
}