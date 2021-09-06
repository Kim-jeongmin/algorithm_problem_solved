#include <bits/stdc++.h>
using namespace std;

int N; 
int W[11][11];
bool visited[11];
int result = 99999999;

bool visitedCheck(){
  for(int i=2;i<=N;i++){
    if(!visited[i]) return false;
  }
  return true;
}

void dfs(int x, int sum){
    if(visitedCheck()){
      if(W[x][1]) result = min(result, sum+W[x][1]);
    }

  for(int i=2;i<=N;i++){
    if(visited[i] || !W[x][i]) continue;
    visited[i] = true;
    dfs(i, sum+W[x][i]);
    visited[i] = false;
  }
}

int main(){
  cin >> N;

  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      cin >> W[i][j];
    }
  }

  
  dfs(1, 0);

  cout << result;


}