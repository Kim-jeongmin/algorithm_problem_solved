#include <bits/stdc++.h>
using namespace std;

char arr[3100][6200];

void init(){
  for(int i=0;i<3100;i++){
    for(int j=0;j<6200;j++){
      arr[i][j] = ' ';
    }
  }
}

void div_n_coqr(int n, int x, int y){

  if(n == 3) { 
    for(int i=0;i<3;i++){
      for(int j=0;j<5;j++){
        if(i == 0 && j != 2) continue;
        if(i == 1 && j % 2 == 0) continue;
        arr[x+i][y+j] = '*';
      }
    }
    return;
  }

  int div = n/2;

  div_n_coqr(div, x, y);
  div_n_coqr(div, x+div, y-div);
  div_n_coqr(div, x+div, y+div);
}

int main(){
  int N; cin >> N;
  init();
  div_n_coqr(N, 0, N-3);

  for(int i=0;i<N;i++){
    for(int j=0;j<N*2;j++){
      cout << arr[i][j];
    }
    cout << '\n';
  }

}