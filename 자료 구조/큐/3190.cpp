#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int apple = 2;
int time = 1;

int main(){
  arr[0][0] = 1;
  int N, K; cin >> N >> K;

  for(int i=0;i<K;i++){
    int x, y; cin >> x >> y;
    arr[x][y] = apple;
  }

  while(true){
    
  }

}