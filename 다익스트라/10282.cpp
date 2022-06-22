#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int d[10002];
vector<pair<int, int>> graph[10002];
int n, d1, c;

void dijkstra(){

    priority_queue<pair<int, int>> pq;

    pq.push({0, c});
    d[c] = 0;

    while(!pq.empty()){

        int now = pq.top().second;
        int dist = -pq.top().first;

        pq.pop();

        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = d[now] + graph[now][i].first;

            if(cost < d[graph[now][i].second]){
                d[graph[now][i].second] = cost;
                pq.push({-cost, graph[now][i].second});
            }

        }

    }
}

int main(){

    ios::sync_with_stdio(0);
	cin.tie(0);

    int testCase; cin >> testCase;

    while(testCase--){
        int result_cnt = 0, result_time = 0; 
        cin >> n >> d1 >> c;

        for(int i=0;i<d1;i++){
            int a, b, s; 
            cin >> a >> b >> s;

            graph[b].push_back({s, a});    
        }

        fill(d, d+10001, INF);

        dijkstra();

        for(int i=1;i<=n;i++){
            if(d[i] != INF) {
                result_cnt++;
                result_time = max(result_time, d[i]);
            }

            graph[i].clear();
        } 

        cout << result_cnt << ' ' << result_time << '\n';
        
    }
}