#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, M;

vector<pair<int, pair<int, int>>> graph;
int parent[100001];
bool flag = false;
ll result = 0;

int find_parent(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find_parent(parent[x]);
}

void unionVertex(int u, int v){
    flag = false;

    u = find_parent(u);
    v = find_parent(v);

    if(u == v) return;
    else{
        flag = true;
        parent[u] = v;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M;

    for(int i=0;i<M;i++){
        int a, b, c; cin >> a >> b >> c;

        graph.push_back({c, {a, b}});
    }

    for(int i=1;i<=N;i++) parent[i] = i;
    
    sort(graph.begin(), graph.end());

    int last;

    for(int i=0;i<graph.size();i++){

        unionVertex(graph[i].second.first, graph[i].second.second);

        if(flag == true) {
            result += graph[i].first;
            last = graph[i].first;
        }
    }

    result -= last;
    

    cout << result;
}