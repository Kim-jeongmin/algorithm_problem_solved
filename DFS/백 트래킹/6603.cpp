#include <bits/stdc++.h>
using namespace std;

int arr[6], k;
vector<int> v(15);

void dfs(int n, int pos){

  if(n == 6){
    for(int i=0;i<6;i++) cout << arr[i] << ' ';
    cout << '\n';
  }
  else {
    for(int i=pos;i<k;i++){
      arr[n] = v[i];
      dfs(n+1,i+1);
    }
  }
}

int main(){
  
  while(1){
    cin >> k;
    if(k == 0) break;

    for(int i=0;i<k;i++) cin >> v[i];

    dfs(0,0);

    cout << '\n';
  }
}