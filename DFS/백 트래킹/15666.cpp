#include <bits/stdc++.h>
using namespace std;

int N, M; 
int arr[9];
vector<int> v;
map<int,int> numberCnt;

bool flag(){
  for(int i=0;i<M-1;i++){
    if(arr[i] > arr[i+1]) return false;
  }
  return true;
}

void dfs(int n){

  if(n == M){
    if(flag()){
      for(int i=0;i<M;i++){
        cout << arr[i] << ' ';
      }
      cout << '\n';
    }
    return;
  }

  for(int j=0;j<v.size();j++){
    arr[n] = v[j];
    dfs(n+1);
  }
}

int main(){
  cin >> N >> M;
  
  for(int i=0;i<N;i++){
     int num; cin >> num;

     if(!numberCnt.count(num)){
       numberCnt[num] = 1;
       v.push_back(num);
     }
     else numberCnt[num]++;

    
  }

  sort(v.begin(), v.end());
  
  dfs(0);
}
