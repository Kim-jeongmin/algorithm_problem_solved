#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K; cin >> N >> K;
    int v[1000010];
    for(int i=0;i<N;i++) cin >> v[i];
    int p = 0, q = 0, cnt = 0, result = 9999999;
    while(p<N && q<N) {
        while(cnt != K && q<N){
            if(v[q] == 1) cnt++;
            q++;
        }
        while(v[p] != 1) p++;
        if(cnt == K) result = min(q-p,result);
        p++; cnt--;
        while(v[p] != 1) p++;
    }
    if(result != 9999999) cout << result;
    else cout << -1;
}