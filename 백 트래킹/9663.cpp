#include <bits/stdc++.h>
using namespace std;

int N, cnt;
int col[16];

bool promising(int i){
  int k = 1;
  bool flag = true;

  while(k<i && flag){
    if(col[i] == col[k] || abs(col[i] - col[k]) == i-k) flag = false;
    k++;
  }
  return flag;
}

void queens(int i){

  if(promising(i)){

    if(i == N) cnt++;
    else {
      for(int j=1;j<=N;j++){
        col[i+1] = j;
        queens(i+1);
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> N;

  queens(0);
  cout << cnt;
}

