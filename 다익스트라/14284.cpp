#include <bits/stdc++.h>
#define MAX_NODE 5001
#define INF 1e9
using namespace std;

int n, m;
vector<pair<int, int>> graph[MAX_NODE];
int d[MAX_NODE];

void dijkstra(int start_node){

    priority_queue<pair<int, int>> pq;
    pq.push({0, start_node});
    d[start_node] = 0;

    while(!pq.empty()){
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();
        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = dist + graph[now][i].first;
            int next = graph[now][i].second;

            if(d[next] > cost){
                d[next] = cost;
                pq.push({-d[next], next});
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int a, b, c;
    for(int i=1;i<=n;i++) d[i] = INF;
    for(int i=0;i<m;i++){
        cin >> a >> b >> c;

        graph[a].push_back({c, b});
        graph[b].push_back({c, a});
    }

    int start_node, end_node;
    cin >> start_node >> end_node;

    dijkstra(start_node);

    cout << d[end_node];
}