#include <bits/stdc++.h>
#define MAX 65
using namespace std;

int N;
int arr[MAX][MAX];

void div_n_coqr(int n, int x, int y){

  bool flag = true;

  for(int i=x;i<n+x;i++){
    for(int j=y;j<n+y;j++){
      if(arr[x][y] != arr[i][j]) flag = false;
    }
  }

  if(!flag){
    cout << '(';
    div_n_coqr(n/2, x, y);
    div_n_coqr(n/2, x, y+n/2);
    div_n_coqr(n/2, x+n/2, y);
    div_n_coqr(n/2, x+n/2, y+n/2);
    cout << ')';
  }
  else cout << arr[x][y];
}

int main(){

  cin >> N;
  string str;

  for(int i=0;i<N;i++) {
    cin >> str;
    for(int j=0;j<N;j++){
      arr[i][j] = str[j] - '0';
    }
  }
    
  div_n_coqr(N, 0, 0);
}
