#include <bits/stdc++.h>
using namespace std;

int M,N,result = 0;
int arr[1001][1001];
int visited[1001][1001];
int dir[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
queue<pair<int,int>> q;

bool findZero(){

  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      if(visited[i][j] == 0) {
        return true;
      }
    }
  }
  return false;
}

bool isIn(int x, int y){
  if(0<=x && x<M && 0<=y && y<N) return true;
  else return false;
}

void bfs(){
  while(!q.empty()){
    int a = q.front().first;
    int b = q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int n_a = a + dir[i][0];
      int n_b = b + dir[i][1];
      if(isIn(n_a,n_b) == true && visited[n_a][n_b] == 0){
        q.push({n_a,n_b});
        visited[n_a][n_b] = visited[a][b] + 1;
        result = max(result, visited[n_a][n_b]);
      }
    }
  }
}

int main(){
  cin >> N >> M;
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      cin >> arr[i][j];
      if(arr[i][j] == 1){
        visited[i][j] = arr[i][j];
        q.push({i,j});
      }
      else if(arr[i][j] == -1){
        visited[i][j] = arr[i][j];
      }
    }
  }

  bfs();

  if(findZero() == true) cout << -1;
  else {
    if(result == 0) cout << 0;
    else cout << result - 1;
  }
}