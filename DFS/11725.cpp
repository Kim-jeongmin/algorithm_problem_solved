#include <bits/stdc++.h>
using namespace std;

int parent[100002];
vector<int> graph[100002];

void find_parent(int x){
  
  for(int i=0;i<graph[x].size();i++){
    if(parent[graph[x][i]] == 0){
      parent[graph[x][i]] = x;
      find_parent(graph[x][i]);
    }
  }

}

int main(){
  int N; cin >> N;

  int A, B;
  for(int i=1;i<N;i++){
    cin >> A >> B;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }

  parent[1] = 1;
  find_parent(1);

  for(int i=2;i<=N;i++){
    cout << parent[i] << '\n';
  }

}