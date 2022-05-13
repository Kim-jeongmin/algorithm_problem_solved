#include <bits/stdc++.h>
using ll = long long;
using namespace std;

const ll INF = (ll)1e18;

int N, M, X;
vector<pair<ll, ll>> graph[1002];
ll d[1002][1002];

ll result = 0;

void dijkstra(int start_node){

    priority_queue<pair<ll, ll>> pq;

    d[start_node][start_node] = 0;
    
    pq.push({0, start_node});

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[start_node][now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = d[start_node][now] + graph[now][i].second;

            if(cost < d[start_node][graph[now][i].first]) {
                d[start_node][graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first});
            }
        }
    }

}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N >> M >> X;

    for(int i=0;i<M;i++){
        int a, b, c; cin >> a >> b >> c;

        graph[a].push_back({b, c});
    }

    fill(&d[0][0], &d[1001][1002], INF);

    for(int i=1;i<=N;i++) dijkstra(i);

    for(int i=1;i<=N;i++){
        result = max(result, d[i][X] + d[X][i]);
    }

    cout << result;
}