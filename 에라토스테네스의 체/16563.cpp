#include <bits/stdc++.h> 
#define MAX 5000001
using namespace std;

int minfactor[MAX];

void eratosthenes(){
  minfactor[0] = minfactor[1] = -1;

  for(int i=2;i<=MAX;i++){
    minfactor[i] = i;
  }

  for(int i=2;i*i<=MAX;i++){
    if(minfactor[i] == i){
      for(int j = i*i;j<=MAX;j+=i){
        if(minfactor[j] == j) minfactor[j] = i;
      }
    }
  }
}

vector<int> factor(int k){

  vector<int> result;

  int copy = k;

  while(copy > 1){
    result.push_back(minfactor[copy]);
    copy /= minfactor[copy];
  }

  return result;
  
}

int main(){
  cin.tie(0); cout.tie(0);
  ios_base::sync_with_stdio(false);
  int testCase; cin >> testCase;
  eratosthenes();

  while(testCase--){
    int k; cin >> k;
    vector<int> v;

    v = factor(k);
    
    for(int i=0;i<v.size();i++){
      cout << v[i] << ' ';
    }
    cout << '\n';
  }
}

