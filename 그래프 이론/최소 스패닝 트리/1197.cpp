#include <bits/stdc++.h>
using namespace std;

int V, E, A, B, C;
long long result = 0;
vector<pair<int, int>> graph[10001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
bool visited[10001];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> V >> E;

  for(int i=0;i<E;i++){
    cin >> A >> B >> C;
    graph[A].push_back({B,C});
    graph[B].push_back({A,C});
  }

  pq.push({0,1});

  while(!pq.empty()){
    int curWeight = pq.top().first;
    int curVertex = pq.top().second;
    
    pq.pop();

    if(visited[curVertex]) continue;
    visited[curVertex] = true;

    result += curWeight;

    for(int i=0;i<graph[curVertex].size();i++){
      int nextVertex = graph[curVertex][i].first;
      int nextWeight = graph[curVertex][i].second;

      pq.push({nextWeight, nextVertex});
    }

  }

  cout << result;
  
}