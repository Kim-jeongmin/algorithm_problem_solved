#include <bits/stdc++.h>
using namespace std;
int result = 0;

bool check(int x){
  return result & (1<<(x-1));
}

void add(int x){
  if(!check(x)) result |= (1<<(x-1));
}

void remove(int x){
  if(check(x)) result &= ~(1<<(x-1));
}

void toggle(int x){
  if(check(x)) remove(x);
  else add(x);
}



int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int M; cin >> M;

  string str; int a;
  for(int i=0;i<M;i++){

    cin >> str;

    if(str == "add") {
      cin>> a; add(a);
    }
    else if(str == "remove") {
      cin>> a; remove(a); 
    }
    else if(str == "check") {
      cin>> a; cout << check(a) << '\n';
    }
    else if(str == "toggle") {
      cin >> a; toggle(a);
    }
    else if(str == "all") result = (1<<20)-1;
    else result = 0;
  }
}