#include <bits/stdc++.h>
using namespace std;

bool visited[101];
vector<pair<int, int>> snl;

void bfs(){

  queue<pair<int,int>> q;
  q.push({1,0});
  visited[1] = true;

  while(!q.empty()){
    
    int cur_x = q.front().first;
    int cur_cnt = q.front().second;

    q.pop();

    for(int i=1;i<=6;i++){
      int next_x = cur_x + i;
      int next_cnt = cur_cnt + 1;

      for(int j=0;j<snl.size();j++){
        if(next_x == snl[j].first){
          next_x = snl[j].second;
        }
      }

      if(visited[next_x]) continue;
      visited[next_x] = true;
      
      if(next_x == 100) {
        cout << next_cnt;
        return;
      }
      q.push({next_x, next_cnt});
    }
  }
}

int main(){
  int N, M; cin >> N >> M;

  int x, y;
  for(int i=0;i<N+M;i++){
    cin >> x >> y;
    snl.push_back({x, y});
  }

  bfs();
}