#include <bits/stdc++.h>
using namespace std;

const int INF = 1e8;
int N, M;

int d[50002];
vector<pair<int, int>> graph[50002];

void dijkstra(){

    priority_queue<pair<int, int>> pq;

    d[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = dist + graph[now][i].first;

            if(cost < d[graph[now][i].second]){
                pq.push({-cost, graph[now][i].second});
                d[graph[now][i].second] = cost;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> N >> M;

    for(int i=0;i<M;i++){
        int A_i, B_i, C_i;
        cin >> A_i >> B_i >> C_i;

        graph[A_i].push_back({C_i, B_i});
        graph[B_i].push_back({C_i, A_i});
    }

    fill(d, d+50001, INF);

    dijkstra();

    cout << d[N];
}