#include <bits/stdc++.h>
using namespace std;

int arr[50][50];
int visited[50][50];
int dir[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
int result = 0;
int M, N, k;

void clearArr(){
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      arr[i][j] = 0;
      visited[i][j] = 0;
    }
  }
  result = 0;
}

bool isIn(int x, int y){
  return 0<=x && x<M && 0<=y && y<N;
}

void bfs(int x, int y){
  queue<pair<int, int>> q;
  q.push({x,y});
  visited[x][y] = result;
  while(!q.empty()){
    int c_x = q.front().first;
    int c_y = q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int n_x = c_x + dir[i][0];
      int n_y = c_y + dir[i][1];
      if(isIn(n_x,n_y) && visited[n_x][n_y] == 0 && arr[n_x][n_y] == 1){
        q.push({n_x, n_y});
        visited[n_x][n_y] = result;
      }
    }
  }
}

int main(){

  int T; cin >> T;

  while(T--){
    cin >> M >> N >> k;
    for(int i=0;i<k;i++){
      int x, y; cin >> x >> y;
      arr[x][y] = 1;
    }
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        if(visited[i][j] == 0 && arr[i][j] == 1) {
          result++;
          bfs(i,j);
        }
      }
    }
    cout << result << '\n';
    clearArr();
  }
}