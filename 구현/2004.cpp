#include <bits/stdc++.h>
using namespace std;

long long divide_5(long long x){
  long long result = 0;
  for(long long i=5;i<=x;i=i*5){
    result+=x/i;
  }
  return result;
}

long long divide_2(long long x){
  long long result = 0;
  for(long long i=2;i<=x;i=i*2){
    result+=x/i;
  }
  return result;
}

int main(){
  long long n, m; cin >> n >> m;

  int result_2 = divide_2(n)-(divide_2(n-m)+divide_2(m));
  int result_5 = divide_5(n)-(divide_5(n-m)+divide_5(m));

  cout << min(result_2, result_5);

}