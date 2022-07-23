#include <bits/stdc++.h>
using namespace std;

int N, M;
const int MAX = 100000;

vector<int> tree[MAX+1];
int parent[MAX+1][18], depth[MAX+1];
bool visited[MAX+1];

void set_tree(int cur, int d){
    visited[cur] = true;
    depth[cur] = d;

    for (int i=0;i<tree[cur].size();i++){
        int next = tree[cur][i];

        if(!visited[next]){
            parent[next][0] = cur;
            set_tree(next, d+1);
        } 
    }
}

void dp_parent(int n){
    for(int i=1;i<18;i++){
        for(int j=1;j<=N;j++){
            parent[j][i] = parent[parent[j][i-1]][i-1];
        }
    }
}

int LCA(int a, int b){

    if(depth[a] > depth[b]) swap(a, b);

    for(int i=17;i>=0;i--){
        if(depth[b] - depth[a] >= (1 << i)){
            b = parent[b][i];
        }
    }

    if(a == b) return a;

    for(int i=17;i>=0;i--){
        if(parent[a][i] != parent[b][i]){
            a = parent[a][i];
            b = parent[b][i];
        }
    }

    return parent[a][0];
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin >> N;

    int a, b;
    for(int i=0;i<N-1;i++){
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    memset(parent,-1,sizeof(parent));
    fill(depth,depth+N, -1);

    set_tree(1, 0);
    dp_parent(N);

    cin >> M;

    for(int i=0;i<M;i++){
        cin >> a >> b;
        
        cout << LCA(a, b) << '\n';
    }

}