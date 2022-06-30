#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define MAX 1000001
int N, M, K;

ll arr[MAX], tree[1 << 21];

ll init(int start, int end, int node){
    if(start == end) return tree[node] = arr[start];
    int mid = (start + end) / 2;

    return tree[node] = init(start, mid, node*2) + init(mid+1, end, node*2+1); 
}

ll sum(int start, int end, int node, int left, int right){
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;   
    return sum(start, mid, node * 2, left, right) + sum(mid+1, end, node * 2 + 1, left, right);
}

void update(int start, int end, int node, int index, int dif){
    if(index < start || index > end) return;

    tree[node] += dif;
    if(start == end) return;

    int mid = (start + end) / 2;
    update(start, mid, node*2, index, dif);
    update(mid+1, end, node*2+1, index, dif);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> K;

    for(int i=0;i<N;i++) cin >> arr[i];

    init(0, N-1, 1);

    ll a, b, c;
    for(int i=0;i<M+K;i++){
        cin >> a >> b >> c;
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define MAX 1000001
int N, M, K;

ll arr[MAX], tree[4*MAX];

ll init(int start, int end, int node){
    if(start == end) return tree[node] = arr[start];
    int mid = (start + end) / 2;

    return tree[node] = init(start, mid, node*2) + init(mid+1, end, node*2+1); 
}

ll sum(int start, int end, int node, int left, int right){
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;   
    return sum(start, mid, node * 2, left, right) + sum(mid+1, end, node * 2 + 1, left, right);
}

void update(int start, int end, int node, int index, ll dif){
    if(index < start || index > end) return;

    tree[node] += dif;
    if(start == end) return;

    int mid = (start + end) / 2;
    update(start, mid, node*2, index, dif);
    update(mid+1, end, node*2+1, index, dif);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> K;

    for(int i=0;i<N;i++) cin >> arr[i];

    init(0, N-1, 1);

    ll a, b, c;
    for(int i=0;i<M+K;i++){
        cin >> a >> b >> c;

        if(a == 1) {
            update(1, N, 1, b, c - arr[b-1]);
            arr[b-1] = c;
        }
        else {
            cout << sum(1, N, 1, b, c) << '\n';
        }
    }

}
        if(a == 1) {
            update(0, N-1, 1, b-1, c - arr[b-1]);
            arr[b-1] = c;
        }
        else {
            cout << sum(0, N-1, 1, b-1, c-1) << '\n';
        }
    }

}