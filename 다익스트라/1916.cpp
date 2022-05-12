#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[1001];
int d[1001];
int N, M; 

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

            int cost = d[now] + graph[now][i].second;

            if(cost < d[graph[now][i].first]){
                d[graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first});
            }
        }
    }


}

int main(){
    cin >> N >> M;
    int start_node, end_node;

    for(int i=0;i<M;i++){
        int a, b, c; cin >> a >> b >> c;

        graph[a].push_back({b, c});
    }

    cin >> start_node >> end_node;

    fill(d, d+1001, INF);

    dijkstra(start_node);

    cout << d[end_node];

}