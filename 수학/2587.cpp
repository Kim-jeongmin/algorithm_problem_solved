#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(5);
  int sum = 0;
  for(int i=0;i<5;i++){
    cin >> v[i];
    sum += v[i];
  }
  sort(v.begin(), v.end());
  cout << sum / 5 << '\n' << v[2];

}