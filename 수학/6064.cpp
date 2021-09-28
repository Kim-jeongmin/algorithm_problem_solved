#include <bits/stdc++.h>
using namespace std;

int M, N, x, y;

int GCD(int a, int b){
  if(a % b == 0) return b;
  return GCD(b, a%b);
}

int LCM(int a, int b){
  return (a * b) / GCD(a, b);
}

int main(){
  int T; cin >> T;

  while(T--){
    cin >> M >> N >> x >> y;

    int maxYear = LCM(M, N);
    
    while(1){
      if(x > maxYear || (x-1) % N + 1 == y) break;

      x += M;
    }

    if(x > maxYear) cout << -1 << '\n';
    else cout << x << '\n';
  }
}