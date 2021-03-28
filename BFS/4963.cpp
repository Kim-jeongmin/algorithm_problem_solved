#include <bits/stdc++.h>
using namespace std;

int arr[51][51];
int visited[51][51];
int dir[8][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
int result = 0;
int a, b;

void clearArr(){
  for(int i=0;i<51;i++){
    for(int j=0;j<51;j++){
      arr[i][j] = 0;
      visited[i][j] = 0;
    }
  }
  result = 0;
}

bool isIn(int x, int y){
  return 0<=x && x<b && 0<=y && y<a;
}

void bfs(int x, int y){
  queue<pair<int, int>> q;
  q.push({x,y});
  visited[x][y] = result;
  while(!q.empty()){
    int c_x = q.front().first;
    int c_y = q.front().second;
    q.pop();
    for(int i=0;i<8;i++){
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

  while(true){
    cin >> a >> b;
    if(a == 0 && b == 0) break;

    for(int i=0;i<b;i++){
      for(int j=0;j<a;j++){
        cin >> arr[i][j];
      }
    }

    for(int i=0;i<b;i++){
      for(int j=0;j<a;j++){
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