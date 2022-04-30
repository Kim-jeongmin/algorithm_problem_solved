#include <bits/stdc++.h>
using namespace std;

int a, b;
char v[20];

void dfs(int n, int x, int y, string str, int pos){

  if(n == a){
    if(x >= 1 && y >= 2){
      cout << str << '\n';
    }
    return;
  } 
  else {
    for(int i=pos;i<b;i++){
      if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') dfs(n+1,x+1,y,str+v[i],i+1);
      else dfs(n+1,x,y+1,str+v[i],i+1);
    }
  }

}

int main(){
  cin >> a >> b;

  for(int i=0;i<b;i++){
    cin >> v[i];
  }

  sort(v,v+b);

  dfs(0,0,0,"",0);
}