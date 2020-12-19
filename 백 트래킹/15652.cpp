#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[8];

bool func(){
  bool flag = true;
  for(int i=0;i<M-1;i++){
    if(arr[i] > arr[i+1]) {
      flag = false;
      break;
    }
  }
  return flag;
}

void dfs(int n){
  if(n == M){
    if(func()){
      for(int i=0;i<M;i++){
        cout << arr[i] << " ";
      }
      cout << "\n";
    }
    return;
  }
  for(int i=1;i<=N;i++){
    arr[n] = i;
    dfs(n+1); 
  }
}

int main(){
  cin >> N >> M;

  dfs(0);

}