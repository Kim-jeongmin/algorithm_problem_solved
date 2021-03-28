#include <bits/stdc++.h>
using namespace std;

const int p[6] = {2, 4, 8, 16, 32, 64};

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int cnt = 0, p_cnt = 0;

  for(int x = -100; x <= 100; x++){
    if(a*x*x + b*x + c == 0){
      cnt++;
      for(int i=0;i<6;i++){
        if(x == p[i]) p_cnt++;
      }
    }
  }
  if(cnt != 2) cout << "둘다틀렸근";
  else if(p_cnt == 2) cout << "이수근";
  else cout << "정수근";
}