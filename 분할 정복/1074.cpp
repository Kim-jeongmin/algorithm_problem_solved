#include <bits/stdc++.h>
using namespace std;


int n, r, c;
int num = 0;

void checker(int a){

  if(a == 0) return;

  int k = pow(2, a-1) - 1;

  if(k >= r && k >= c) checker(a-1);`
  else if(k >= r && k < c) {
    num += pow(k+1,2);
    c -= k+1;
    checker(a-1);
  }
  else if(k < r && k >= c) {
    num += pow(k+1,2)*2;
    r -= k+1;
    checker(a-1);
  }
  else {
    num += pow(k+1,2)*3;
    c -= k+1;
    r -= k+1;
    checker(a-1);
  }
}

int main(){

  cin >> n >> r >> c;

  checker(n);

  cout << num;

}