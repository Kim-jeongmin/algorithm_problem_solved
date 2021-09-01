#include <bits/stdc++.h>
using namespace std;

int cnt_1 = 0, cnt_0 = 0;
int arr[129][129];

void div_conq(int x, int y, int N){

  int temp = 0;

  for(int i=x;i<x+N;i++){
    for(int j=y;j<y+N;j++){
      if(arr[i][j]) temp++;
    }
  }

  if(!temp) cnt_0++;
  else if(temp == N*N) cnt_1++;
  else {
    div_conq(x+N/2, y+N/2, N/2);
    div_conq(x, y+N/2, N/2);
    div_conq(x+N/2, y, N/2);
    div_conq(x, y, N/2);
  }


}

int main(){
  int N; cin >> N;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin >> arr[i][j];
    }
  }

  div_conq(0, 0, N);

  cout << cnt_0 << '\n' << cnt_1;
}