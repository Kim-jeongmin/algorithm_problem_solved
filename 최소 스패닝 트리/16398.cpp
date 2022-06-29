#include <bits/stdc++.h>
using namespace std;

int N;
int parent[1001];
long long result = 0;
bool flag;
vector<tuple<long long, int, int>> graph;

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
    cin >> N;

    for(int i=0;i<N;i++) parent[i] = i;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            long long n; cin >> n;
            if(i == j) continue;

            graph.push_back({n, i, j});
        }
    }

    sort(graph.begin(), graph.end());

    for(int i=0;i<graph.size();i++){
        unionVertex(get<1>(graph[i]), get<2>(graph[i]));

        if(flag) result += get<0>(graph[i]);
    }

    cout << result;
}