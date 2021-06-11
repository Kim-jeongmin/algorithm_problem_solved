#include <bits/stdc++.h>
using namespace std;

int main(){

  int N, M, result = 0; cin >> N >> M;
  vector<int> v(N+1);
  for(int i=0;i<N;i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int pivot;
  for(int i=0;i<N+1;i++){
    if(v[i] == 0) pivot = i;
  }

  for(int i=0;i<pivot;i+=M){
    result += abs(v[i]*2);
  }

  for(int i=N;i>pivot;i-=M){
    result += abs(v[i]*2);
  }

  result -= max(abs(v[0]), v[N]);

  cout << result;
}