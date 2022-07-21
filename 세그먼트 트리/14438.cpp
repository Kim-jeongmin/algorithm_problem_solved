#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

int arr[MAX+1], tree[4*MAX+1];

int init(int start, int end, int node){
    if(start == end) return tree[node] = arr[start];

    int mid = (start + end)/2;
    return tree[node] = min(init(start, mid, 2*node), init(mid+1, end, 2*node+1));
}

int update(int start, int end, int node, int idx){
    if(idx < start || end < idx) return tree[node];
    if(start == end) return tree[node] = arr[start];
    
    int mid = (start + end) / 2;
    return tree[node] = min(update(start, mid, 2*node, idx), update(mid+1, end, 2*node+1, idx));
}

int small(int start, int end, int node, int left, int right){
    if(right < start || end < left) return 2100000000;
    if(left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return min(small(start, mid, 2*node, left, right), small(mid+1, end, 2*node+1, left, right));
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    init(0, N-1, 1);

    int M; cin >> M;
    int a, b, c;
    for(int i=0;i<M;i++){
        cin >> a >> b >> c;

        if(a == 1){
            arr[b-1] = c;
            update(0, N-1, 1, b-1);
        }
        else if(a == 2){
            cout << small(0, N-1, 1, b-1, c-1) << '\n';
        }
    }
}