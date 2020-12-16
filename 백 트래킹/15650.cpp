#include <bits/stdc++.h>
using namespace std;

int pac(int x){
  int result = 1;
  while(x!=0){
    result *= x;
    x--;
  }
  return result;
}
int main(){
  
  int N, M; cin >> N >> M;
  vector<int> v(N);

  for(int i=0;i<N;i++){
    v[i] = i + 1;
  }

  do {
    
    int cnt = 0;

    for(int i=0;i<M-1;i++){
      if(v[i] < v[i+1]) cnt++;
    }
    
    if(cnt == M - 1) {
      for(int i=0;i<M;i++){
        cout << v[i] << ' ';
      }
      cout << '\n';
    }

    for(int i=0;i< pac(N-M) - 1;i++) next_permutation(v.begin(), v.end());

  } while(next_permutation(v.begin(),v.end()));
}