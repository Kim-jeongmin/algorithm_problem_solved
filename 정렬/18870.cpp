#include <bits/stdc++.h>
using namespace std;

int main(){

  int N; cin >> N;

  vector<pair<int,int>> v(N);
  for(int i=0;i<N;i++){
    cin >> v[i].first;
    v[i].second = i;
  }

  vector<int> result(N);

  sort(v.begin(), v.end());
  int cnt = 0;

  for(int i=0;i<N;i++){
    result[v[i].second] = cnt;
    if(v[i].first != v[i+1].first){
      cnt++;
    }
  }

  for(int i=0;i<N;i++){
    cout << result[i] << ' ';
  }
}