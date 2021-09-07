#include <bits/stdc++.h>
using namespace std;

bool visited[1000001];
typedef struct CT{
  vector<int> v;
  int result;
}ct;

void bfs(int N){

  vector<int> v;
  v.push_back(N);
  queue<CT> q;
  q.push({v, N});
  visited[N] = true;

  while(!q.empty()){

    vector<int> next_v = q.front().v;
    int next_result = q.front().result;
    q.pop();

    if(next_result == 1) {
      cout << next_v.size()-1 << '\n';
      for(int i=0;i<next_v.size();i++){
        cout << next_v[i] << ' ';
      }
      return;
    }

    if(next_result % 3 == 0 && !visited[next_result/3]){
      visited[next_result/3] = true;
      next_v.push_back(next_result/3);
      q.push({next_v, next_result/3});
      next_v.pop_back();
    }

    if(next_result % 2 == 0 && !visited[next_result/2]){
      visited[next_result/2] = true;
      next_v.push_back(next_result/2);
      q.push({next_v, next_result/2});
      next_v.pop_back();
    }
    
    if(!visited[next_result-1]){
      visited[next_result-1] = true;
      next_v.push_back(next_result-1);
      q.push({next_v, next_result-1});
      next_v.pop_back();
    }
  }


}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int N; cin >> N;

  bfs(N);
}