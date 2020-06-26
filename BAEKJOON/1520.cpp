#include <iostream>
using namespace std;

int N,M;
int arr[501][501],visited[501][501];
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

bool Isin(int a,int b){
    return 0<=a&&a<N&&0<=b&&b<M;
}
int dfs(int a,int b){
    if(a==N-1&&b==M-1) return 1;
    if(visited[a][b] != -1) return visited[a][b];
    visited[a][b] = 0;
    for(int i=0;i<4;i++){
      int x = a + dir[i][0];
      int y = b + dir[i][1];
      if(Isin(x,y)&&arr[a][b]>arr[x][y]) visited[a][b] += dfs(x,y);
    }
    return visited[a][b];
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> N >> M;
    for(int i=0;i<N;i++) for(int j=0;j<M;j++) cin >> arr[i][j];
    for(int i= 0; i < N; i ++){
      for(int j = 0 ; j < M ; j ++){
        visited[i][j] = -1;
      }
    }
    cout << dfs(0,0);
}