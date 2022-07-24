#include <bits/stdc++.h>
using namespace std;

const int MAX = 40000;
const int i_MAX = 16;

int N; 
vector<pair<int, int>> tree[MAX+1];
int parent[MAX+1][i_MAX], dist[MAX+1][i_MAX], depth[MAX+1];
bool visited[MAX+1];

void set_tree(int cur, int d){
    visited[cur] = true;
    depth[cur] = d;

    for(int i=0;i<tree[cur].size();i++){
        int next = tree[cur][i].first;
        int next_dist = tree[cur][i].second;

        if(!visited[next]) {
            parent[next][0] = cur;
            dist[next][0] = next_dist;
            set_tree(next, d+1);
        }
    }
}

void dp_parent(){
    
    for(int i=1;i<i_MAX;i++){
        for(int j=1;j<=N;j++){
            parent[j][i] = parent[parent[j][i-1]][i-1];
            dist[j][i] = dist[parent[j][i-1]][i-1] + dist[j][i-1];
        }
    }

}

int LCA(int a, int b){
    int result = 0;

    if(depth[a] > depth[b]) swap(a, b);

    for(int i=i_MAX-1;i>=0;i--){
        if(depth[b] - depth[a] >= (1 << i)){
            result += dist[b][i];
            b = parent[b][i];
        }
    }

    if(a == b) return result;

    for(int i=i_MAX-1;i>=0;i--){
        if(parent[b][i] != parent[a][i]){
            result += dist[b][i] + dist[a][i];
            b = parent[b][i]; a = parent[a][i];
        }
    }

    return result + dist[a][0] + dist[b][0];
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    cin >> N;

    int a, b, c;
    for(int i=0;i<N-1;i++){
        cin >> a >> b >> c;

        if(a == b) continue;
        tree[a].push_back({b, c});
        tree[b].push_back({a, c});
    }

    set_tree(1, 0);

    dp_parent();

    int M; cin >> M;

    for(int i=0;i<M;i++){
        cin >> a >> b;

        cout << LCA(a, b) << '\n';
    }
}