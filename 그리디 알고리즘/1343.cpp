#include <bits/stdc++.h>
using namespace std;

int main(){
  string str, result = ""; cin >> str;
  string A = "AAAA", B = "BB";

  int cnt = 0;
  for(int i=0;i<str.size();i++){
    if(str[i] != 'X') {
      if(cnt % 2 != 0) {
        cout << -1;
        return 0;
      }
      for(int j=0;j<cnt/4;j++) result += A;
      if(cnt%4==2) result += B;
      
      result = result + '.';
      cnt = 0;
    }
    else cnt++;
  }

  if(cnt % 2 != 0) {
    cout << -1;
    return 0;
  }
  for(int j=0;j<cnt/4;j++) result += A;
  if(cnt%4==2) result += B;

  cout << result;

}