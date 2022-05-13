#include <bits/stdc++.h>
using ll = long long;
using namespace std;

const ll INF = (ll)1e18;

int N, M, X;
vector<pair<ll, ll>> graph[2][1002];
ll d[2][1002];

ll result = 0;

void dijkstra(int num){

    priority_queue<pair<ll, ll>> pq;

    d[num][X] = 0;
    
    pq.push({0, X});

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[num][now] < dist) continue;

        for(int i=0;i<graph[num][now].size();i++){
            int cost = d[num][now] + graph[num][now][i].second;

            if(cost < d[num][graph[num][now][i].first]) {
                d[num][graph[num][now][i].first] = cost;
                pq.push({-cost, graph[num][now][i].first});
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

        graph[1][a].push_back({b, c});

        graph[0][b].push_back({a, c});
    }

    fill(&d[0][0], &d[1][1002], INF);

    dijkstra(1);

    dijkstra(0);

    for(int i=1;i<=N;i++){
        result = max(result, d[0][i] + d[1][i]);
    }
    cout << result;
}