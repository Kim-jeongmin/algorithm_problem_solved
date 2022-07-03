#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;

int arr[MAX], minTree[4*MAX], maxTree[4*MAX];

int maxinit(int start, int end, int node){
    if(start == end) return maxTree[node] = arr[start];

    int mid = (start + end)/2;

    return maxTree[node] = max(maxinit(start, mid, node*2), maxinit(mid+1, end, node*2+1));
}

int mininit(int start, int end, int node){
    if(start == end) return minTree[node] = arr[start];

    int mid = (start + end)/2;

    return minTree[node] = min(mininit(start, mid, node*2), mininit(mid+1, end, node*2+1));
}

int minfind(int start, int end, int node, int left, int right){
    if(end < left || start > right) return 2100000000;
    if(left <= start && end <= right) return minTree[node];

    int mid = (start + end) / 2;

    return min(minfind(start, mid, node*2, left, right), minfind(mid+1, end, node*2+1, left, right));
}

int maxfind(int start, int end, int node, int left, int right){
    if(end < left || start > right) return 0;
    if(left <= start && end <= right) return maxTree[node];

    int mid = (start + end) / 2;

    return max(maxfind(start, mid, node*2, left, right), maxfind(mid+1, end, node*2+1, left, right));
}



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N, M; cin >> N >> M;

    for(int i=0;i<N;i++) cin >> arr[i];

    maxinit(0, N-1, 1);
    mininit(0, N-1, 1);

    while(M--){
        int a, b; cin >> a >> b;

        cout << minfind(0, N-1, 1, a-1, b-1) << ' ' << maxfind(0, N-1, 1, a-1, b-1) << '\n';
    }
}

