#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;

void bfs(int start_x,int start_y,int end_x,int end_y){

  queue <pair<int,int>> q;
  q.push({start_x,start_y});

  while(!q.empty()){

    int x = q.front().first;
    int y = q.front().second;

    q.pop();

    if(end_x == x && end_y == y){
      cout << "happy\n";
      return;
    }
    
    for(int i=0;i<v.size();i++){
      int re_x = abs(x - v[i].first);
      int re_y = abs(y - v[i].second);
      if(re_x + re_y <= 1000){
        q.push({v[i].first,v[i].second});
        v.erase(v.begin()+i);
      }

    }
  }

  cout << "sad\n";

}


int main(){
  int testcase; cin >> testcase;
  
  for(int i=0;i<testcase;i++){

    int n; cin >> n;
    int start_x, start_y;
    cin >> start_x >> start_y;

    for(int j=0;j<n;j++){
      int x, y; cin >> x >> y;
      v.push_back({x,y});
    }

    int end_x, end_y; cin >> end_x >> end_y;
    v.push_back(make_pair(end_x, end_y));
    bfs(start_x,start_y,end_x,end_y);

    v.erase(v.begin(),v.end());

  }
}
