#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> v;
map<int, int> numberCnt;
int visited[9];

void dfs(int cnt, int idx){

  if(M == cnt){
    for(int i=0;i<M;i++){
      cout << v[visited[i]] << ' ';
    }
    cout << '\n';

    return;
  }

  if(N == idx) return;

  for(int i=0;i<v.size();i++){
    if(numberCnt[v[i]] > 0){
      numberCnt[v[i]]--;

      visited[idx] = i;
      
      dfs(idx+1, cnt+1);

      numberCnt[v[i]]++;
    }
  }
} 

int main(){

  cin >> N >> M;
  
  for(int i=0;i<N;i++){
     int num; cin >> num;

     if(!numberCnt.count(num)){
       numberCnt[num] = 1;
       v.push_back(num);
     }
     else numberCnt[num]++;

    
  }

  sort(v.begin(), v.end());

  dfs(0, 0);
}