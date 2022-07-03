#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define MAX 100001
int N;

ll arr[MAX], tree[4*MAX];

int minIndex(int x, int y){
    if(arr[x] == arr[y]) return x < y ? x : y;
    return  arr[x] < arr[y] ? x : y;
}

ll init(int start, int end, int node){
    if(start == end) return tree[node] = start;
    int mid = (start + end) / 2;

    return tree[node] = minIndex(init(start, mid, node*2), init(mid+1, end, node*2+1)); 
}

int update(int start, int end, int node, int index){
    if(index < start || index > end || start == end) return tree[node];

    int mid = (start+end)/2;

    return tree[node] = minIndex(update(start, mid, node*2, index), update(mid+1, end, node*2+1, index));
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for(int i=0;i<N;i++) cin >> arr[i];

    init(0, N-1, 1);

    int Q; cin >> Q;

    for(int i=0;i<Q;i++){
        int a; cin >> a;

        if(a == 1){
            int b, c; cin >> b >> c;

            arr[b-1] = c;

            update(0, N-1, 1, b-1);
        }
        else {
            cout << tree[1] + 1 << '\n';
        }
    }

}