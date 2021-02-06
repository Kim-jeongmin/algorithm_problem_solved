#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int tmp = N;
  long long cnt = 0, result = 0;

  while(N /= 10) cnt++;

  for(int i=1;i<=cnt;i++) result += 9 * i * pow(10,i-1);

  tmp -= pow(10,cnt) - 1;

  result += tmp * (cnt+1);
  
  cout << result;

}