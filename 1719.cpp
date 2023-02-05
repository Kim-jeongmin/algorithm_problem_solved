#include <bits/stdc++.h>
#define MAX_SIZE 201
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[MAX_SIZE];
int d[MAX_SIZE];
int result[MAX_SIZE][MAX_SIZE];

void dijkstra(int start_node){

    priority_queue<pair<int, int>> pq;
    pq.push({0, start_node});
    d[start_node] = 0;

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(dist > d[now]) continue;
        for(int i=0;i<graph[now].size();i++){
            int cost = dist + graph[now][i].first;

            if(cost < d[graph[now][i].second]){
                d[graph[now][i].second] = cost;
                pq.push({-cost, graph[now][i].second});
                result[graph[now][i].second][start_node] = now;
            }
        }
    }
}

int main(){
    int n, m; cin >> n >> m;

    for(int i=0;i<m;i++){
        int a, b, c; cin >> a >> b >> c;

        graph[a].push_back({c, b});
        graph[b].push_back({c, a});
    }

    for(int i=1;i<=n;i++){
        fill(d, d+MAX_SIZE, INF);
        dijkstra(i);
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(result[i][j]) cout << result[i][j] << ' ';
            else cout << "- ";
        }
        cout << '\n';
    }
}