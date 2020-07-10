#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M; cin >> N >> M;
    vector<int> v(N);
    for(int i=0;i<N;i++) cin >> v[i];
    int sum = v[0],p=0,q=1,result=0;
    while(p<N && q<=N){
        if(sum >= M) {
            if(sum == M) result ++;
            sum-=v[p];
            p++;
        }
        else {
            sum+=v[q];
            q++;
        }
    }
    cout << result;
}