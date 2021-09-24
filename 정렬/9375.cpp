#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, string> a, pair<string ,string> b) {
  return a.second < b.second;
}

int main(){
  int T; cin >> T;

  while(T--){

    int n; cin >> n;
    vector<pair<string, string>> v(n);

    for(int i=0;i<n;i++){
      cin >> v[i].first >> v[i].second;
    }

    if(n == 1 || n == 0){
      cout << n << '\n';
      continue;
    }

    sort(v.begin(), v.end(), cmp);

    int tmp = 1, result = 1;
    for(int i=0;i<n-1;i++){
      if(v[i].second == v[i+1].second) tmp++;
      else {
        result *= (tmp+1);
        tmp = 1;
      }
    }

    if(v[n-2].second == v[n-1].second) result *= (tmp+1);
    else result *= (tmp)*2;


    cout << result-1 << '\n';

  }
}