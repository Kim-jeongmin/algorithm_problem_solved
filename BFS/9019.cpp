#include <bits/stdc++.h>
using namespace std;

int A, B;
bool visited[10001];

string bfs(){
  
  queue<pair<int, string>> q;
  q.push({A,""});
  visited[A] = true;

  while(!q.empty()){

    int c_A = q.front().first;
    string c_S = q.front().second;


    q.pop();
    if(c_A == B) return c_S;

    if(visited[2*c_A%10000] == false){
      visited[c_A] = true;
      q.push({2*c_A%10000, c_S+'D'});
    }
    if(visited[(c_A + 9999) % 10000] == false){
      visited[(c_A + 9999) % 10000] = true;
      q.push({(c_A + 9999) % 10000, c_S+'S'});
    }
    if(visited[(c_A % 1000) * 10 + (c_A/1000)] == false){
      visited[(c_A % 1000) * 10 + (c_A/1000)] = true;
      q.push({(c_A % 1000) * 10 + (c_A/1000), c_S+'L'});
    }
     if(visited[c_A / 10 + (c_A % 10) * 1000] == false){
      visited[c_A / 10 + (c_A % 10) * 1000] = true;
      q.push({c_A / 10 + (c_A % 10) * 1000 , c_S+'R'});
    }
  }

  return "";
}

int main(){

  int T; cin >> T;
  for(int i=0;i<T;i++){
    memset(visited, false, sizeof(visited));
    cin >> A >> B;

    cout << bfs() << '\n';
  }
}