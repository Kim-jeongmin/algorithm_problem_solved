#include <bits/stdc++.h>
#define MAX_SIZE 1001
#define INF 1e9
using namespace std;

int N, W;
double M;
double graph[MAX_SIZE][MAX_SIZE]; 
double d[MAX_SIZE];

void dijkstra(){

    priority_queue<pair<double, int>> pq;
    pq.push({0, 1});
    d[1] = 0;

    while(!pq.empty()){

        double dist = -pq.top().first;
        int now = pq.top().second;

        pq.pop();

        if(d[now] < dist) continue;
        for(int i=1;i<=N;i++){
            if(graph[now][i] == INF) continue;
            double cost = dist + graph[now][i];
            if(cost < d[i]){
                d[i] = cost;
                pq.push({-cost, i});
            }
        }
    }

}

int main(){
    cin >> N >> W >> M;

    vector<pair<int, int>> v(N);
    for(int i=0;i<N;i++) cin >> v[i].first >> v[i].second;

    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            
            double x = v[i-1].first - v[j-1].first;
            double y = v[i-1].second - v[j-1].second;
            double dist = sqrt(x*x + y*y);

            if(dist <= M) graph[i][j] = graph[j][i] = dist;
            else graph[i][j] = graph[j][i] = INF;
        }
    }

    for(int i=0;i<W;i++){
        int x, y; cin >> x >> y;
        graph[x][y] = graph[y][x] = 0;
    }
    
    fill(d, d+1001, INF);
    dijkstra();

    cout << int(d[N] * 1000);
}