#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, result = 0; cin >> N;

  vector<int> v(N);
  for(int i=0;i<N;i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int temp = 0;
  for(int i=0;i<N;i++){
    temp += v[i];
    result += temp;
  }

  cout << result;
}