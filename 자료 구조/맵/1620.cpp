#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int N, M; cin >> N >> M;

  map<int, string> m1;
  map<string, int> m2;

  for(int i=0;i<N;i++){
    string str; cin >> str;
    m1.insert(pair<int, string>(i+1, str));
    m2.insert(pair<string, int>(str, i+1));
  }

  for(int i=0;i<M;i++){
    string str; cin >> str;
    if(isdigit(str[0])) cout << m1[stoi(str)] << '\n';
    else cout << m2[str] << '\n';
  }
}