#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int N, M;

int d[1001], route[1001];
int start_node, end_node;
vector<pair<int, int>> graph[1001];

void dijkstra(){

    priority_queue<pair<int ,int>> pq;

    pq.push({0, start_node});
    d[start_node] = 0;

    while(!pq.empty()){
        
        int dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[now] < dist) continue;

        for(int i=0;i<graph[now].size();i++){
            int next = graph[now][i].first;
            int nCost = graph[now][i].second;

            if(d[next] > dist + nCost){
                route[next] = now;
                d[next] = dist + nCost;
                pq.push({-d[next], next});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

    stack<int> result;
    cin >> N >> M;

    for(int j=0;j<M;j++){
        int x, y, z;
        cin >> x >> y >> z;

        graph[x].push_back({y, z});
    }

    cin >> start_node >> end_node;

    fill(d, d+1001, INF);

    dijkstra();

    cout << d[end_node] << '\n';
    
    int pos = end_node;
    while(pos){    
        result.push(pos);
        pos = route[pos];
    }

    cout << result.size() << '\n';

    while(!result.empty()) {
        cout << result.top() << ' ';
        result.pop();
    }
    cout << '\n';
}