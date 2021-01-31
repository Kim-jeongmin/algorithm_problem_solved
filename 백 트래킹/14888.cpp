#include <bits/stdc++.h>
using namespace std;

int num;
vector<long long> v(11);
vector<long long> c(4);
long long max_result = -1000000001, min_result = 1000000001; 

void dfs(int n, long long result){
  if(n == num) {
    max_result = max(max_result, result);
    min_result = min(result, min_result);
    return;
  }

  for(int i=0;i<4;i++){
    if(c[i] == 0) continue;
    c[i]--;
    if(i == 0) dfs(n+1, result + v[n]);
    else if(i == 1) dfs(n+1, result - v[n]);
    else if(i == 2) dfs(n+1, result * v[n]);
    else dfs(n+1, result / v[n]);
    c[i]++;
  }

  

}

int main(){
  cin >> num;

  for(int i=0;i<num;i++) cin >> v[i];

  for(int i=0;i<4;i++) cin >> c[i];

  dfs(1,v[0]);

  cout << max_result << '\n' << min_result;
}