#include <bits/stdc++.h>
using namespace std;

bool check_1(int x){
  for(int i=2;i<=sqrt(x);i++){
    if(x%i == 0) return false;
  }
  if(x == 1) return false;
  return true;
}

bool check_2(string x){
  for(int i=0;i<x.size();i++){
    if(x[i] != x[x.size()-i-1]) return false;
  }
  return true;
}

int main(){

  int N; cin >> N;

  while(!check_2(to_string(N)) || !check_1(N)) N++;

  cout << N;
}