#include <bits/stdc++.h>
using namespace std;

bool flag;
int m, n, result = 0;

int parent[200001];
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
    else{
        flag = true;
        parent[u] = v;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    while(true){
        cin >> m >> n;

        if(m == 0 && n == 0) break;

        for(int i=0;i<m;i++) parent[i] = i;

        int a, b, c;
        for(int i=0;i<n;i++){
            cin >> a >> b >> c;

            graph.push_back({c, a, b});
            result += c;
        }

        sort(graph.begin(), graph.end());

        for(int i=0;i<n;i++){
            unionVertex(get<1>(graph[i]), get<2>(graph[i]));

            if(flag) result -= get<0>(graph[i]);                    
        }

        cout << result << '\n';

        for(int i=0;i<n;i++) graph.pop_back();
        result = 0;
    }
}