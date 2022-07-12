#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

int arr[MAX+1], tree[4*MAX+1];

int minindex(int a, int b){

    if(a == -1) return b;
    if(b == -1) return a;
    
    if(arr[a] > arr[b]) return b;
    else return a;
}

int init(int start, int end, int node){
    if(start == end) return tree[node] = start;

    int mid = (start + end) / 2;
    return tree[node] = minindex(init(start, mid, node*2), init(mid+1, end, node*2+1));
}

int update(int start, int end, int node, int idx){
    if(start > idx || idx > end) return tree[node];
    if (start == end) return tree[node];

    int mid = (start + end)/2;
    return tree[node] = minindex(update(start, mid, node*2, idx), update(mid+1, end, node*2+1, idx));
}

int minSearch(int start, int end, int node, int left, int right){
    if(start > right || end < left) return -1;
    if(left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return minindex(minSearch(start, mid, node*2, left, right), minSearch(mid+1, end, node*2+1, left, right));
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }    

    init(0, N-1, 1);

    int M; cin >> M;
    for(int i=0;i<M;i++){
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 1) {
            arr[b-1] = c;
            update(0, N-1, 1, b-1);
        }
        else cout << minSearch(0, N-1, 1, b-1, c-1)+1 << '\n';
        
    }
}