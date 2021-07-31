#include <bits/stdc++.h>
using namespace std;

char arr[51][51];
int result = 100;

void arrCheck(int x, int y){
  int result_1 = 0, result_2 = 0;
  for(int i=x;i<x+8;i++){
    for(int j=y;j<y+8;j++){

      if(i%2==0 && j%2==0) {
        if(arr[i][j] != 'W') result_1++;
        else result_2++;
      }

      else if(i%2==0 && j%2==1) {
        if(arr[i][j] != 'B') result_1++;
        else result_2++;
      }

      else if(i%2==1 && j%2==0){
        if(arr[i][j] != 'B') result_1++;
        else result_2++;
      }
      
      else {
        if(arr[i][j] != 'W') result_1++;
        else result_2++;
      }
    }
  }
  result = min(min(result_1, result_2), result);
}


int main(){
  int N, M; cin >> N >> M;

  for(int i=0;i<N;i++){
    string str; cin >> str;
    
    for(int j=0;j<M;j++){
      arr[i][j] = str[j];
    }
  }

  for(int i=0;i<=N-8;i++){
    for(int j=0;j<=M-8;j++){

      arrCheck(i,j);

    }
  }


  
  cout << result;
}