#include <bits/stdc++.h>
using namespace std;

int main(){

  int N; cin >> N;
  int result = 0, zeroCnt, oneCnt = 0;
  vector<int> v(N);

  for(int i=0;i<N;i++){
    cin >> v[i];
    if(v[i] == 1) oneCnt++;
  }

  zeroCnt = N - oneCnt;

  for(int i=0;i<N;i++){
    if(oneCnt == 0) break;
    if(v[i] == 1) {
      result ++;
      for(int j=i;j<i+3;j++){
        if(v[j] == 1) {
          v[j] = 0;
          zeroCnt++;
          oneCnt--;
        }
        else {
          v[j] = 1;
          zeroCnt--;
          oneCnt++;
        }
        if(j == N-1) break;
      }
    }
  }

  cout << result;

}