#include <bits/stdc++.h>
using namespace std;

int N, M; 
int arr[9], v[9];

bool func(){

  bool flag = true;

  for(int i=0;i<M-1;i++){
    if(arr[i] > arr[i+1]) flag = false;
  }
   
  return flag;

}

void dfs(int i){

  if(i == M){
    if(func()){
      for(int i=0;i<M;i++){
        cout << arr[i] << ' ';
      }
      cout << '\n';
    }
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