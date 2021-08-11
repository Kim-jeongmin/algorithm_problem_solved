#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  
  vector<int> v(N);
  for(int i=0;i<N;i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  //산술평균 구하기

  double sum = 0;
  for(int i=0;i<N;i++){
    sum += v[i];
  }

  cout << floor(sum / N + 0.5) << '\n';

  //중앙값 구하기

  cout << v[N/2] << '\n';

  //최빈값 구하기

  queue<int> q;
  int maxSize = 0;

  for(int i=0;i<N;i++){
    int cnt = 1;
    for(int j=i+1;j<N;j++){
      if(v[i] != v[j]) break;
      cnt++;
    }

    if(cnt >= maxSize){
      if(cnt > maxSize) {
        while(!q.empty()) q.pop();
        maxSize = cnt;
      }
      q.push(v[i]);
    }
    i+=cnt-1;
  }

  if(q.size() > 1) q.pop();

  cout << q.front() << '\n';

  //범위 구하기

  cout << v[N-1] - v[0] << '\n';
}