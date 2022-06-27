//크루스칼 알고리즘
#include <bits/stdc++.h>
using namespace std;

int V, E;
int parent[10001];
vector<tuple<int,int,int>> graph;
bool flag;
long long result = 0;

int find_parent(int x){
  if(parent[x] == x) return x;
  else return find_parent(parent[x]);
}

void unionVertex(int u, int v){
  flag = false;

  u = find_parent(u);
  v = find_parent(v);

  if(u == v) return;
  else {
    parent[u] = v;
    flag = true;
  }
}

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> V >> E; 

  for(int i=1;i<=V;i++) parent[i] = i;
  

  for(int i=0;i<E;i++){
    int A, B, C; cin >>  A >> B >> C;
    graph.push_back({C,A,B});
  }

  sort(graph.begin(), graph.end());

  for(int i=0;i<E;i++){

    unionVertex(get<1>(graph[i]), get<2>(graph[i]));

    if(flag) result += get<0>(graph[i]);
  }

  cout << result;

}








//프림 알고리즘
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