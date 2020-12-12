#include <bits/stdc++.h>
using namespace std;

int main(){
  int num; cin >> num;
  int cnt = 0;
  vector<long long> v(num);
  vector<long long> vt;

  for(int i=0;i<num;i++){
    cin >> v[i];
  }

  vt.push_back(-1000000001);

  for(int i=0;i<num;i++){
    if(vt.back() < v[i]){
      vt.push_back(v[i]);
      cnt++;
    }
    else {
      auto it = lower_bound(vt.begin(), vt.end(), v[i]);
      *it = v[i];
    }
  }

  cout << cnt;
}