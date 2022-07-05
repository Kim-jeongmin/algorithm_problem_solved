#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAX = 1000000;
const ll mod = 1000000007;

ll arr[MAX+1], tree[4*MAX];

ll init(int start, int end, int node){
    if(start == end) return tree[node] = arr[start];

    int mid = (start + end) / 2;
    return tree[node] = (init(start, mid, node*2) * init(mid+1, end, node*2+1)) % mod;
}

ll update(int start, int end, int node, int index){
    if(index < start || end < index) return tree[node];
    if(start == end) return tree[node] = arr[start];

    int mid = (start + end) / 2;
    return tree[node] = (update(start, mid, node*2, index) * update(mid+1, end, node*2+1, index)) % mod;
}

ll mul(int start, int end, int node, int left, int right){
    if(right < start || end < left) return 1;
    if(left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return (mul(start, mid, node*2, left, right) * mul(mid+1, end, node*2 + 1, left, right)) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, K; cin >> N >> M >> K;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    init(0, N-1, 1);

    for(int i=0;i<M+K;i++){
        int a, b, c; cin >> a >> b >> c;

        if(a == 1){
            arr[b-1] = c;
            update(0, N-1, 1, b-1);
        }
        else {
            cout << mul(0, N-1, 1, b-1, c-1) << '\n';
        }
    }
}