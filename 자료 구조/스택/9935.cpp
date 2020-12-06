#include <bits/stdc++.h>
using namespace std;

int main(){
  string str, bomb; cin >> str >> bomb;
  int B = bomb.size(), idx = 0;;
  char result[1000001];

  for(int i=0;i<str.size();i++){

    result[idx++] = str[i];

    if(str[i] == bomb[B - 1]){
      if(idx >= B){
        int cnt = 0;
        for(int j=0;j<B;j++){
          if(bomb[j] != result[idx - B + j]){
            break;
          }
          cnt++;
        }
        if(cnt == B) idx -= B;
      }
    }

  }
  if(idx == 0)  cout << "FRULA";
  else {
    for(int i=0;i<idx;i++){
      cout << result[i];
    }
  }
}