#include <bits/stdc++.h>
using namespace std;


int main(){
  int N; cin >> N;
  vector<pair<int,int>> v(N);
  vector<int> result(N);

  for(int i=0;i<N;i++){
    cin >> v[i].first >> v[i].second;
  }

  for(int i=0;i<N;i++){
    int cnt = 1;
    for(int j=0;j<N;j++){
      if(i == j) continue;

      if(v[i].first < v[j].first && v[i].second < v[j].second) cnt++; 
    }
    result[i] = cnt;
  }

  for(int i=0;i<N;i++){
    cout << result[i] << ' ';
  }
  
}