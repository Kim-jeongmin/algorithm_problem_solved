#include <bits/stdc++.h>
using namespace std;

int N, M; 
int arr[9], v[9];

void dfs(int i){

  if(i == M){
    for(int i=0;i<M;i++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
  }

  for(int j=0;j<N;j++){
    arr[i] = v[j];
    dfs(i+1);
  }
}

int main(){
  cin >> N >> M;

  for(int i=0;i<N;i++){
    cin >> v[i];
  }

  sort(v, v+N);
  
  dfs(0);

}