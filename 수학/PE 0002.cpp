#include <bits/stdc++.h>
using namespace std;

long long result = 0;
int main(){
  int fibo[10001];

  fibo[0] = 1;
  fibo[1] = 2;

  for(int i=2;i<10001;i++){
    fibo[i] = fibo[i-1] + fibo[i-2];
    if(fibo[i] % 2 == 0 && fibo[i] <= 4000000) result += fibo[i];

    if(fibo[i] > 4000000) break;
  }

  cout << result + 2;
} 

//정답 4613732