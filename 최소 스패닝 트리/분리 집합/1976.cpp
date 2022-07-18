#include <bits/stdc++.h>
using namespace std;

int parent[201];

int find_parent(int x){
    if(x == parent[x]) return x;
    else return parent[x] = find_parent(parent[x]);
}

void unionVertex(int u, int v){

    u = find_parent(u);
    v = find_parent(v);

    if(u == v) return;
    else parent[u] = v;
}

int main(){
    int N, M; cin >> N >> M;

    for(int i=1;i<=N;i++) parent[i] = i;
    
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int n; cin >> n;
            if(n == 1) unionVertex(i, j);
        }
    }

    vector<int> v(M);
    for(int i=0;i<M;i++) cin >> v[i];

    bool flag = true;
    for(int i=0;i<M-1;i++){
        if(find_parent(v[i]) != find_parent(v[i+1])){
            flag = false;
            cout << "NO";
            break;
        }
    }

    if(flag) cout << "YES";
}