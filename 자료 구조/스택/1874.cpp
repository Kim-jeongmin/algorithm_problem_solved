#include <bits/stdc++.h>
using namespace std;

int main(){
  int cur_num = 1;
  int n; cin >> n;
  stack<int> s;
  queue<char> q;
  s.push(cur_num++);
  q.push('+');

  for(int i=0;i<n;i++){
    int k; cin >> k;

    if(s.empty()){
      s.push(cur_num++);
      q.push('+');
    }
    
    if(s.top() > k) {
      cout << "NO";
      return 0;
    }
    while(s.top() != k){
      s.push(cur_num++);
      q.push('+');
    }
  

    
    s.pop();
    q.push('-');
    
  }

  while(!s.empty()){
    s.pop();
    q.push('-');
  }


  while(!q.empty()){
    cout << q.front() << '\n';
    q.pop();
  }
}