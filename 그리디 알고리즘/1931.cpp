#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
  if(a.second == b.second) return a.first < b.first;
  else return a.second < b.second;
}

int main(){

  int num; cin >> num;
  vector<pair<int,int>> v(num);
  for(int i=0;i<num;i++){
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(),v.end(),cmp);

  int cnt = 1, pivot = v[0].second;
  for(int i=1;i<num;i++){
    if(pivot <= v[i].first){
      pivot = v[i].second;
      cnt ++;
    }
  }

  cout << cnt;

}