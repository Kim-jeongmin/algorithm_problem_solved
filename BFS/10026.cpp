#include <bits/stdc++.h>
using namespace std;

int N;
char arr[101][101];
int visited[101][101];
int cnt = 0;

int dir[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

bool isIn(int x, int y){
  return 0 <= x && x < N && 0 <= y && y < N; 
}

void bfs(int a, int b){

  queue<pair<int, int>> q;
  q.push({a, b});
  visited[a][b] = cnt;

  while(!q.empty()){

    int cur_x = q.front().first;
    int cur_y = q.front().second;

    q.pop();

    for(int i=0;i<4;i++){

      int next_x = cur_x + dir[i][0];
      int next_y = cur_y + dir[i][1];

      if(isIn(next_x, next_y) && !visited[next_x][next_y] && arr[next_x][next_y] == arr[cur_x][cur_y]) {
        q.push({next_x, next_y});
        visited[next_x][next_y] = cnt;
      }

    }
  }
}

int main(){
  cin >> N;

  string str;
  for(int i=0;i<N;i++){
    cin >> str;
    for(int j=0;j<N;j++){
      arr[i][j] = str[j];
    }
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(!visited[i][j]){
        cnt++; bfs(i, j); 
      }
    }
  }

  cout << cnt << ' ';

  cnt = 0;
  
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(arr[i][j] == 'R') arr[i][j] = 'G';
      visited[i][j] = 0;
    }
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(!visited[i][j]) {
        cnt++; bfs(i, j);
      }
    }
  }

  cout << cnt;
}