#include <bits/stdc++.h>
using namespace std;

int main(){
  int T; cin >> T;

  vector<int> v(T);
  for(int i=0;i<T;i++) cin >> v[i];

  
  bool flag = false;

  int r_a, r_b;

  for(int a=0;a<=10000;a++){

    for(int b=0;b<=10000;b++){
      
      int cnt = 0;
      for(int i=0;i<T-1;i++){
        int num = (a * v[i] + b) % 10001;
        if(v[i+1] == (a * num + b) % 10001) cnt ++;
        else break;
      }

      if(cnt == T-1) {
        flag = true;
        r_a = a; r_b = b;
      }

      if(flag == true) break;

    }

    if(flag == true) break;

  }

  for(int i=0;i<T;i++){
    cout <<  (r_a * v[i] + r_b) % 10001 << '\n';
  }


}