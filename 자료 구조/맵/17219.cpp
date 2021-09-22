#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int N, M; cin >> N >> M;
  map<string, string> map;

  string str, password;
  for(int i=0;i<N;i++){
    cin >> str >> password;
    map.insert({str, password});
  }

  for(int i=0;i<M;i++){
    cin >> str;
    cout << map[str] << '\n';
  }
}