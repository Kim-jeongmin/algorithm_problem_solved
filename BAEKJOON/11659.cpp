#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N,M; cin >> N >> M;
    vector<int> v(N+10);
    vector<int> arr(N+10);
    int sum = 0;
    for(int i=1;i<=N;i++) {
        cin >> v[i];
        sum+=v[i];
    }
    for(int i=0;i<N;i++){
        arr[i] = sum - v[i];
        sum-=v[i];
    }
    for(int i=0;i<M;i++){
        int a,b; cin >> a >> b;
        cout << arr[a-1] - arr[b] << '\n';
    }


}