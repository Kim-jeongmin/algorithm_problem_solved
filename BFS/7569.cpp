#include <bits/stdc++.h>
using namespace std;

int arr[101][101][101];
int visited[101][101][101];
int x, y, z, result = 0;
int dir[6][3] = {{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};

typedef struct pos{
  int a;
  int b;
  int c;
} pos;

queue<pos> q;

bool isIn(int a, int b, int c){
  return 0<=a && a<x && 0<=b && b<y && 0<=c && c<z;
}

bool check(){
  for(int i=0;i<z;i++){
    for(int j=0;j<y;j++){
      for(int k=0;k<x;k++){
        if(visited[i][j][k] == 0 && arr[i][j][k] == 0) return false;
      }
    }
  }
  return true;
}

void bfs(){

  while(!q.empty()){

    int a_x = q.front().a;
    int b_y = q.front().b;
    int c_z = q.front().c;

    q.pop();

    for(int i=0;i<6;i++){
      
      int next_x = a_x + dir[i][0];
      int next_y = b_y + dir[i][1];
      int next_z = c_z + dir[i][2];

      if(isIn(next_z,next_y,next_x) && visited[next_x][next_y][next_z] == 0 && arr[next_x][next_y][next_z] == 0) {
        visited[next_x][next_y][next_z] = visited[a_x][b_y][c_z] + 1;
        q.push({next_x,next_y,next_z});
        result = max(result, visited[next_x][next_y][next_z]);
      }
    }
  }

  
}

int main(){
  cin >> x >> y >> z;

  for(int i=0;i<z;i++){
    for(int j=0;j<y;j++){
      for(int k=0;k<x;k++){
        cin >> arr[i][j][k];
        if(arr[i][j][k] == 1) q.push({i,j,k});
      }
    }
  }
        
  bfs();

  if(!check()) cout << -1;
  else cout << result;
}