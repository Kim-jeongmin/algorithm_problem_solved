#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int M; cin >> M;
  set<int> s;

  for(int i=0;i<M;i++){
    string str; int a; cin >> str;
    if(str == "add")  {
      cin >> a;
      s.insert(a);
    }
    else if(str == "remove"){
      cin >> a;
      s.erase(a);
    }
    else if(str == "check"){
      cin >> a;
      if(s.end() == s.find(a)) cout << 0 << '\n';
      else cout << 1 << '\n';
    }
    else if(str == "toggle"){
      cin >> a;
      if(s.end() == s.find(a)){
        s.insert(a);
      }
      else s.erase(a);
    }
    else if(str == "all"){
      for(int i=1;i<=20;i++) s.insert(i);
    }
    else if(str == "empty"){
      for(int i=1;i<=20;i++) s.erase(i);
    }
  }
}