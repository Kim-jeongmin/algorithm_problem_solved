#include <bits/stdc++.h>
using namespace std;

int main(){
  bool flag = true;
  string str; cin >> str;
  for(int i=0;i<str.size();i++){
    if(str[i] != str[str.size()-i-1]) {
      flag = false;
      break;
    }
  }
  cout << flag;
}