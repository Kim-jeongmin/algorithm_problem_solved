#include <bits/stdc++.h>
using namespace std;

int N, M; 

int pac(int x){
  int result = 1;
  while(x!=0){
    result *= x;
    x--;
  }
  return result;

int main(){
  cin >> N >> M;
  vector<int> v(N);
  for(int i=0;i<N;i++){
    cin >> v[i];
  }

  do {

    for(int i=0;i<M;i++){
      cout << v[i] << ' ';
    }

    cout << '\n';

    for(int i=0;i< pac(N-M) - 1;i++) next_permutation(v.begin(), v.end());

  } while(next_permutation(v.begin(),v.end()));
}