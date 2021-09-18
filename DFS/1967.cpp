#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> tree[100002];
vector<int> resultArr;
int maxValue = 0, result = 0;
bool visited[100002];

void visitedClear(){
  for(int i=0;i<100001;i++) visited[i] = 0;
}

void dfs(int parent, int x, int sum){

  for(int i=0;i<tree[x].size();i++){
    if(tree[x][i].second == parent) continue;
    if(visited[tree[x][i].second] == false){
      visited[tree[x][i].second] = true;
      dfs(x, tree[x][i].second, sum+tree[x][i].first);
    }
  }

  maxValue = max(maxValue, sum);

}

bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first > b.first;
}

int main(){
  int n; cin >> n;

  int a,b,c; 
  for(int i=0;i<n-1;i++){
    cin >> a >> b >> c;
    tree[a].push_back({c,b});
    tree[b].push_back({c,a});
  }

  if(n == 1) {
    cout << 0;
    return 0;
  } 

  for(int i=1;i<=n;i++){
    sort(tree[i].begin(), tree[i].end(), cmp);
  }

  for(int i=1;i<=n;i++){
    visited[i] = 1;
    for(int j=0;j<tree[i].size();j++){
      dfs(i, tree[i][j].second, tree[i][j].first);
      resultArr.push_back(maxValue);
      maxValue = 0;
    }
    visitedClear();
    sort(resultArr.begin(), resultArr.end());

    result = max(resultArr[resultArr.size()-1] + resultArr[resultArr.size()-2], result);

    resultArr.clear();

  }

  cout << result;

}