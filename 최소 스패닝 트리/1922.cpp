#include <bits/stdc++.h>
using namespace std;

int N, M;
bool flag;
int parent[1001];
int result = 0;
vector<tuple<int, int, int>> graph;

int find_parent(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find_parent(parent[x]);
}

void unionVertex(int u, int v){
    flag = false;

    u = find_parent(u);
    v = find_parent(v);

    if(u == v) return;
    else {
        parent[u] = v;
        flag = true;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for(int i=1;i<=N;i++) parent[i] = i;

    for(int i=0;i<M;i++){
        int a, b, c; cin >> a >> b >> c;

        graph.push_back({c, a, b});
    }

    sort(graph.begin(), graph.end());

    for(int i=0;i<M;i++){
        unionVertex(get<1>(graph[i]), get<2>(graph[i]));

        if(flag) result += get<0>(graph[i]);
    }

    cout << result;

}