#include <bits/stdc++.h>
using namespace std;

const int MAX = 50000;

vector<int> tree[MAX+1];
int parent[MAX+1], depth[MAX+1];
bool visited[MAX+1];

void set_tree(int cur, int d){
    visited[cur] = true;
    depth[cur] = d;

    for (int i=0;i<tree[cur].size();i++){
        int next = tree[cur][i];

        if(!visited[next]){
            parent[next] = cur;
            set_tree(next, d+1);
        } 
    }
}


int LCA(int a, int b){

    if(depth[a] > depth[b]) swap(a, b);

    while(depth[a] != depth[b]) b = parent[b];

    while(a != b) {
        a = parent[a]; b = parent[b];
    }

    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;

    int a, b;
    for(int i=0;i<N-1;i++){
        cin >> a >> b;

        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    
    set_tree(1, 0);


    int M; cin >> M;

    for(int i=0;i<M;i++){
        cin >> a >> b;

        cout << LCA(a, b) << '\n';
    }

}