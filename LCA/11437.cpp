#include <bits/stdc++.h>
using namespace std;

const int MAX = 50000;

vector<int> tree[MAX+1];
int parent[MAX+1], depth[MAX+1];
bool visited[MAX+1];

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

    
    queue<int> q;
    q.push(1);
    visited[1] = true;

    while(!q.empty()){

        int now = q.front();
        q.pop();

        for(int i=0;i<tree[now].size();i++){

            int next = tree[now][i];

            if(!visited[next]){
                visited[next] = true;
                depth[next] = depth[now] + 1;
                parent[next] = now;
                q.push(next);
            }
        }
    }


    int M; cin >> M;

    for(int i=0;i<M;i++){
        cin >> a >> b;

        cout << LCA(a, b) << '\n';
    }

}