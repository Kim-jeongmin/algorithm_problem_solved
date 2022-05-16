#include <bits/stdc++.h>
using namespace std;

const int INF = 1e7;

vector<pair<int, int>> graph[810];
int d[2][810];
int N, E;
int v_1, v_2;
int result1 = 0, result2 = 0;


void dijkstra(int start_node, int n){

    d[n][start_node] = 0;
    priority_queue<pair<int, int>> pq;

    pq.push({0, start_node});

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();
        
        if(d[n][now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = dist + graph[now][i].second;

            if(cost < d[n][graph[now][i].first]){
                d[n][graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first});
            }
        }
    }

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> N >> E;

    for(int i=0;i<E;i++){
        int a, b, c; cin >> a >> b >> c;

        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    cin >> v_1 >> v_2;

    fill(&d[0][0], &d[1][802], INF);
    

    dijkstra(v_1, 0);
    dijkstra(v_2, 1);

    result1 = d[0][1] + d[0][v_2] + d[1][N];

    result2 = d[1][1] + d[1][v_1] + d[0][N];

	int result = min(result1, result2);
	
	if(result >= INF) cout << -1;
	else cout << result;
}