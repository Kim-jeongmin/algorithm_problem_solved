#include <bits/stdc++.h>
using namespace std;

int n;
int dir[8][2] = {{2,1}, {1,2}, {-2,1}, {-1,2}, {2,-1}, {1,-2}, {-2,-1}, {-1,-2}};
int arr[301][301];

void clearArr(){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) arr[i][j] = 0;
  }
}
bool isIn(int x, int y){
  return 0<=x&&x<n&&0<=y&&y<n;
}
void bfs(int cur_x, int cur_y, int arr_x, int arr_y){

  queue<pair<int,int>> q;
  q.push({cur_x, cur_y});

  while(!q.empty()){

    int x = q.front().first;
    int y = q.front().second;

    if(x == arr_x && y == arr_y) {
      cout << arr[x][y] << '\n';
      return;
    }

    q.pop();

    for(int i=0;i<8;i++){
      int next_x = x + dir[i][0];
      int next_y = y + dir[i][1];

      if(isIn(next_x,next_y) && arr[next_x][next_y] == 0) {
        q.push({next_x, next_y});
        arr[next_x][next_y] =arr[x][y] + 1;
      }
    }
    
  }
}
int main(){
  int testCase; cin >> testCase;
  while(testCase--){
    
    cin >> n;
    int cur_x, cur_y; cin >> cur_x >> cur_y;
    int arr_x, arr_y; cin >> arr_x >> arr_y;
    
    bfs(cur_x, cur_y, arr_x, arr_y);

    clearArr();
  }
}