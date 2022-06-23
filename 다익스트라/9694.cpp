#include <bits/stdc++.h>
using namespace std;

const int INF = 1e8;
int N, M;

int d[21], route[21];
vector<pair<int, int>> graph[21];

void dijkstra(){

    priority_queue<pair<int ,int>> pq;

    pq.push({0, 0});
    d[0] = 0;

    route[0] = -1;

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int cost = dist + graph[now][i].second;

            if(cost < d[graph[now][i].first]){

                route[graph[now][i].first] = now;
                d[graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first});
            }
        }
    }
}

int main(){
    int T; cin >> T;

    for(int i=1;i<=T;i++){

        stack<int> result;
        cin >> N >> M;

        for(int j=0;j<N;j++){
            int x, y, z;
            cin >> x >> y >> z;

            graph[x].push_back({y, z});
            graph[y].push_back({x, z});
        }

        fill(d, d+20, INF);
        fill(route, route+20, -9);

        dijkstra();

        cout << "Case #" << i << ": ";

        if(route[M-1] == -9) cout << -1 << '\n';
        else{
            int pos = M-1;
            while(pos != 0){    
                result.push(pos);
                pos = route[pos];
            }

            result.push(0);

            while(!result.empty()) {
                cout << result.top() << ' ';
                result.pop();
            }
            cout << '\n';
        }

        for(int i=0;i<21;i++) graph[i].clear();

    }
}