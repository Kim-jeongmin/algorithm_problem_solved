#include <bits/stdc++.h>
using namespace std;

int main(){
  bool flag = false;
  long N, S; cin >> N >> S;
  long result = N;
  
  vector<long> v(N);
  for(int i=0;i<N;i++) cin >> v[i];
  
  long p = 0, q = 0;
  long sum = v[0];
  while(p<N && q<N){

    if(sum >= S) {
      flag = true;
      result = min(result, q-p+1);
      

      if(p == q) {
        p++; q++;
        sum = v[p];
      }
      else sum-=v[p++];
    }
    else sum+=v[++q];

  }

  if(flag) cout << result;
  else cout << 0;
}