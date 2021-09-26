#include <bits/stdc++.h>
#define MAX 2188
using namespace std;

int N; 
int arr[MAX][MAX];
int result[3];

void div_n_coqr(int n, int x, int y){

  bool flag = true;
  int flag_num = arr[x][y];

  for(int i=x;i<x+n;i++){
    for(int j=y;j<y+n;j++){
      if(flag_num != arr[i][j]) flag = false;
    }
  }

  if(!flag){
    div_n_coqr(n/3, x, y);
    div_n_coqr(n/3, x, y+n/3);
    div_n_coqr(n/3, x+n/3, y);
    div_n_coqr(n/3, x+n/3, y+n/3);
    div_n_coqr(n/3, x+n/3, y+2*n/3);
    div_n_coqr(n/3, x+2*n/3, y+n/3);
    div_n_coqr(n/3, x, y+2*n/3);
    div_n_coqr(n/3, x+2*n/3, y);
    div_n_coqr(n/3, x+2*n/3, y+2*n/3);
  }
  else result[flag_num+1]++;
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> N;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin >> arr[i][j];
    }
  }

  div_n_coqr(N, 0, 0);

  for(int i=0;i<3;i++) cout << result[i] << '\n';
}