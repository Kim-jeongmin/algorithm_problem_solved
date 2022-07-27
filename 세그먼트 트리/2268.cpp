#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 1000000;

int N, M;
ll arr[MAX+1], tree[4*MAX+1];

ll Sum(int start, int end, int node, int left, int right){
    if(end < left || right < start) return 0;
    if(left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;

    return  Sum(start, mid, 2*node, left, right) + Sum(mid+1, end, 2*node+1, left, right);
}

ll Modify(int start, int end, int node, int index){
    if(index < start || end < index) return tree[node];
    if(start == end) return tree[node] = arr[index];

    int mid = (start + end) / 2;
    return tree[node] = Modify(start, mid, 2*node, index) + Modify(mid+1, end, 2*node+1, index);
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N, M; cin >> N >> M;

    int a, b, c; 
    for(int i=0;i<M;i++){
        cin >> a >> b >> c;

        if(a == 0) {
            if(b > c) swap(b, c); 
            cout << Sum(0, N-1, 1, b-1, c-1) << '\n';
        }
        else if(a == 1) {
            arr[b-1] = c;
            Modify(0, N-1, 1, b-1);
        }
    }
}