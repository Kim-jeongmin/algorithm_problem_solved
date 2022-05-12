#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[20001];
int V, E;

int d[20001];

void dijkstra(int start_node){
    
    priority_queue<pair<int ,int>> pq;

    pq.push({0, start_node});
    d[start_node] = 0;
    while(!pq.empty()){

        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = dist + graph[now][i].second;

            if(cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first});
            }
        }

    }
}

int main(){

    int start_node;

    cin >> V >> E >> start_node;
    
    for(int i=0;i<E;i++){
        int a, b, c; 
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    fill(d, d+20001, INF);

    dijkstra(start_node);

    for(int i=1;i<=V;i++){
        if(d[i] == INF) cout << "INF\n";
        else cout << d[i] << '\n';
    }
}